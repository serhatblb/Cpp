#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cout<<"birinci sayiyi giriniz: ";
	cin>>a;
	cout<<"ikinci sayiyi giriniz: ";
	cin>>b;
	cout<<"ucuncu sayiyi giriniz: ";
	cin>>c;
	
	if(a>b && a<c || c>a && a<b)
	{
		cout<<"a, b ve c'nin arasinda bir degerdir"<<endl;
	}
	else
		cout<<"a, b ve c'nin arasinda bir deger degildir"<<endl;
	
	//a nýn b ye esit ve c den kucuk olma durumu
	if(a==b && a<c)
	{
		cout<<"a, b'ye esit ve c'den kucuk"<<endl;
	}
	else
		cout<<"a, b'ye esit degil veya c'den kucuk degil"<<endl;
		
	//a nýn b den veya c den buyuk olup olmadýgý
	if(a>b || a>c)
	{
		cout<<"a, b''den veya c'den buyuktur"<<endl;
	}
	else
		cout<<"a, b ve c'den kucuktur veya esittir"<<endl;
	
	//a,b ve c birbirine esit midir?
	if(a==b&&a==c)
	{
		cout<<"uc sayi birbirine esittir"<<endl;
		
	}
	else
		cout<<"uc sayi birbirine esit degildir"<<endl;
		
		
		
		 
}	
	
