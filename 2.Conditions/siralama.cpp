#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	
	cout<<"lutfen birinci sayiyi giriniz: ";
	cin>>x;
	cout<<"lutfen ikinci sayiyi giriniz: ";
	cin>>y;
	cout<<"lutfen ucuncu sayiyi giriniz: ";
	cin>>z;
	
	/* BIRINCI YOL
	
	if(x>y&&x>z)
	{
		cout<<"en buyuk sayi: "<<x<<endl;
		if(y<z)
			cout<<"en kucuk sayi: "<<y<<endl;
		else
			cout<<"en kucuk sayi: "<<z<<endl;
	}
	if(y>x&&y>z)
	{
		cout<<"en buyuk sayi: "<<y<<endl;
		if(x<z)
			cout<<"en kucuk sayi: "<<x<<endl;
		else
			cout<<"en kucuk sayi: "<<z<<endl;
	}
	if(z>y&&z>x)
	{
		cout<<"en buyuk sayi: "<<z<<endl;
		if(y<x)
			cout<<"en kucuk sayi: "<<y<<endl;
		else
			cout<<"en kucuk sayi: "<<x<<endl;
	}
	
	
	*/
	
	//İKINCİ YONTEM
	
	/*
	 int enbuyuk=x;
	 if(y>enbuyuk)
	 	enbuyuk=y;
	 if (z>enbuyuk)	
	 	enbuyuk=z;
	int enkucuk=x;
		if(y<enkucuk)
			enkucuk=y;
		if(z<enkucuk)
			enkucuk=z;
	
	cout<<"en buyuk sayi: "<<enbuyuk<<endl;
	cout<<"en kucuk sayi: "<<enkucuk<<endl;
	
	*/
	
	return 0;
	
}
