#include <iostream>
using namespace std;

	//itaretive fonksiyonla faktoriyel
	int faktoriyel(int x){
		int carpim=1;
		for(int i=x;i>0;i--){
			carpim*=i;
		}
	return carpim;
	}
	

	int kombinasyon(int n,int r){
		return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	}


	int main(){
		int a,b;
		cout<<"Kombinasyonu alinacak iki sayi giriniz "<<endl;
		cout<<"1.sayi: ";
		cin>>a;
		cout<<"2.sayi: ";
		cin>>b;

		cout<<"Girilen sayilarin Kombinasyonu: "<<kombinasyon(a,b)<<endl;
	}
