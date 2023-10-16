#include <iostream>
using namespace std;

int main(){
	char sifre='a';
	char yapilacakIslem,a,b;
	int hesaptakiPara=1000,cekilecekPara;
	
	cout<<" Z Bankasina Hosgeldiniz"<<endl<<"Lutfen Kartinizi Takiniz... ."<<endl;
	cout<<"Kartiniza ait sifreyi giriniz: ";
	cin>>sifre;
	if(sifre=='a'){
		cout<<"Tesekkurler"<<endl;
		cout<<"Islemler Listesi"<<endl;
		cout<<"a-> Para Cekme"<<endl;
		cout<<"b-> Bakiye Goruntuleme"<<endl;
			
		cout<<"Yapilacak islemi seciniz: "<<yapilacakIslem;
		cin>>yapilacakIslem;
			if(yapilacakIslem=='a'){
				cout<<"Para Miktarini Giriniz: ";
				cin>>cekilecekPara;
					if(cekilecekPara>hesaptakiPara){
						cout<<"Yetersiz Bakiye"<<endl;
					}
					else{
						cout<<"Kalan Bakiye: "<<hesaptakiPara-cekilecekPara<<endl;
						cout<<"Paranizi Aliniz..."<<endl;
				}
			}
			else if(yapilacakIslem=='b'){
				cout<<"Kalan Bakiyeniz: "<<hesaptakiPara<<"\n Yine bekleriz... :)"<<endl;
			}		
	}
	else{
		cout<<"Gecersiz Sifre"<<endl;	
	}

cout<<"Kartinizi Almayi Unutmayiniz...";
}

