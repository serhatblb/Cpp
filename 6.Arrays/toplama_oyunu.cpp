#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[5];
	cout<<"lutfen bes sayi giriniz: "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int eb=a[0];
	int ek=a[0];
	int toplam=a[0];
	for(int i=1;i<5;i++){
		toplam +=a[i];
		if(eb<a[i])
			eb=a[i];
		if(ek>a[i])
			ek=a[i];
	}
	cout<<"maks. = "<<toplam-ek<<endl;
	cout<<"min. = "<<toplam-eb<<endl;
}

