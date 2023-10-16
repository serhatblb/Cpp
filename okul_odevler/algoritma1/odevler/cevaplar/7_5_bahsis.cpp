#include <iostream>
using namespace std;


void bahsisHesaplama(int hesap1,float bahsisOrani1,int kisiSayisi1){
    float bahsis;
    if(bahsisOrani1!=-1){
        bahsisOrani1=bahsisOrani1/100;
        bahsis=hesap1*bahsisOrani1;
    }
    else{
        bahsisOrani1=10;
        bahsis=hesap1*(bahsisOrani1/100);
    }
    if(kisiSayisi1==-1) kisiSayisi1=1;


    cout<< "Hesap: "<<hesap1<< "--> bahsis (%"<<bahsisOrani1<<", "<<kisiSayisi1<<" kisi) :"<<bahsis<<" kisi basi: "<<bahsis/kisiSayisi1;

}



int main(){
	
	int deneme;
    float hesap,bahsisOrani,kisiSayisi;

    cout<< "Hesap tutarini giriniz: ";
    cin>>hesap;
    cout<< "Bahsis oranini giriniz: ";
    cin>>bahsisOrani;
    cout<<"Kisi sayisi: ";
    cin>>kisiSayisi;

    bahsisHesaplama(hesap,bahsisOrani,kisiSayisi);

	cin>>deneme;
	return 0;
}

