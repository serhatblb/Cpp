#include <iostream>
using namespace std;


//15 25 66 33 22
int main()
{
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	//en buyuk
	int eb=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>eb){
			eb=a[i];
		}
	}
	cout<<"en buyuk deger: "<<eb<<endl;
	
	//en kucuk
	int ek=a[0];
	for(int i=0;i<5;i++){
		if(a[i]<ek){
			ek=a[i];
		}
	}
	cout<<"en kucuk deger: "<<ek<<endl;
	
	//toplam
	int toplam=0;
	for(int i=0;i<5;i++){
		toplam +=a[i];
	}
	cout<<"sayilarin toplami: "<<toplam<<endl;
	cout<<"sayilarin ortalamasi: "<<(float)toplam/5<<endl;
}
