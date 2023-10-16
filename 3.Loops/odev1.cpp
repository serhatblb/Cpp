#include <iostream>
using namespace std;
int main()
{
/*
//100 den 0 a kadar 13 e tam bölünen sayılar

	for(int a=100;a>0;a--){
		if(a%13==0)
			cout<<a<<" ";
	}	
	cout<<endl;
	cout<<endl;
	
	//karışık ornek
	
/*	int us=2;
	for(int i=1;i<=6;i++){
	
	
	cout<<i*15<<"\t"<<i*5<<"\t "<<100-(i-1)*10<<"\t "<<us<<endl;
	us*=2;
	}


//Fibonacci serisi
	int n;
	cout<<"Bir sayi giriniz: ";
	cin>>n;
	
	int a=1;
	int b=1;
	if(n==1)
		cout<<1;
	
	else if(n<=0);
	
	else{	
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<n;i++){
	
		int c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	}
	
	cout<<endl;
	cout<<endl;
	
	*/
	
	
	// oran
	
	int n;
	cout<<"Kac sayi hesaplamak istediginizi yaziniz: ";
	cin>>n;
	int esayi=0, asayi=0, ssayi=0;
	for(int i=0;i<n;i++){
		int g;
		cin>>g;
		if(g>0){
		
			asayi++;
		}
		else if(g<0)
			esayi++;
		else
			ssayi++;
		}
		
		cout<<"Pozitifler: "<<(float)asayi/n<<endl;
		cout<<"Negatifler: "<<(float)esayi/n<<endl;
		cout<<"Sifirlar: "<<(float)ssayi/n<<endl;

}
