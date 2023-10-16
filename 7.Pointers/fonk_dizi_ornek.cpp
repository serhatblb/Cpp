#include <iostream>
using namespace std;

int f(int *a,int boyut){
	int eb=a[0];
	int ek=a[0];
	for(int i=0;i<boyut;i++){
		if(a[i]>eb){
			eb=a[i];
		}
		if(a[i]<ek){
			ek=a[i];
		}
	}
	cout<<"eb: "<<eb<<" ek: "<<ek<<endl;
	return eb-ek;
}

int main(){
	int a[9];
	cout<<"9 sayi giriniz: "<<endl;
	for(int i=0;i<9;i++){
		cin>>a[i];
	}
	cout<<"eb ve ek sayinin farki: "<<f(a,9)<<endl;
}
