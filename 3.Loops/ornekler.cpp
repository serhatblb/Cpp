
#include <iostream>
using namespace std;
int main()
{

	for(int i=1;i<100;i+=2){
		
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<endl;
//ORNEK 2
//50-70 ARASI �IFT SAYILAR
	
	for(int i=50;i<=70;i++){
		if(i%2==0)
		cout<<i<<" ";
	}

	cout<<endl;
	cout<<endl;
//ORNEK 3
// 100 DE 70 KADAR OLAN 7 YE B�L�NEB�LEN SAYILAR
	
	for(int a=100;a>=70;a--){
		if(a%7==0)
		cout<<a<<endl;
	}
	cout<<endl;
	cout<<endl;
//ORNEK 4
//1-100 ARASI 3VE 7 YE BOLUNEN
	
	for(int i=1;i<=100;i++){
		if(i%7==0 && i%3==0)
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<endl;

//ORNEK 5
//G�R�LEN SAY�LARIN ORTALAMASI
		
		int toplam=0;
	for(int i=1;i<=5;i++){
		int okunan;
		cout<<i<<". sayiyi giriniz: ";
		cin>>okunan;
		toplam +=okunan;
	}
		cout<<"Girilen sayilarin ortalamasi: "<<(float)toplam/5;
	

	cout<<endl;
	cout<<endl;

//ORNEK 6
//-1 G�RENE KADAR ORTALAMA
	
	/*
	int toplam=0;
	int sayi=0;
	int okunan=0;
	int i;
	for(i=0;okunan!=-1;i++){
		cout<<"bir sayi giriniz: ";
		cin>>okunan;
		toplam+=okunan;
		sayi++;
	}
	sayi--;
	toplam+=1;
	cout<<"ortalama: "<<(float)toplam/sayi<<endl;
		
*/ //denemeler �rne�inde �al���yor ama burdaki hatay� anlamad�m



}


