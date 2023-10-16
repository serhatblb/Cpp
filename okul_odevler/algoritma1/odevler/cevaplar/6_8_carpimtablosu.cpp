#include <iostream>
using namespace std;

int main(){

    int girilenSayi,tahmin,dogruCevap;
    int i=1;

    cout<< "Bir sayi giriniz: ";
    cin>>girilenSayi;
    while(i<=10){
        dogruCevap=girilenSayi*i;
        cout<<girilenSayi<< " * "<<i<<"= ";
        cin>>tahmin;
        if(tahmin==dogruCevap) i++;
        else if(tahmin!=dogruCevap){
            cout<< "Yanlis yanit..."<<endl;
            cout<< "Dogru yanit: "<<dogruCevap<<endl;
            i++;
        }
    }

return 0;
}
