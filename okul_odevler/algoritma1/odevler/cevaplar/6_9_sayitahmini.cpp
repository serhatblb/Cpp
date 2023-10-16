#include <iostream>
using namespace std;

int main(){

    int tutulanSayi=5;
    int tahminEdilenSayi;
    int sayac;
    cout<< "1-10 arasinda bir sayi tuttuk. Sayiyi tahmin edebilir misiniz?"<<endl;
    for(int i=1;i<10;i++){
        cout<< "Tahmininiz: ";
        cin>>tahminEdilenSayi;
       if(tahminEdilenSayi>tutulanSayi)
            cout<< "Daha Kucuk"<< "\nSon "<<10-i<< " denemeniz kaldi"<<endl;

        else if(tahminEdilenSayi<tutulanSayi)
            cout<< "Daha Buyuk"<< "\nSon "<<10-i<< " denemeniz kaldi"<<endl;

        else{
            cout<< "Tebrikler "<<i<<". denemede buldunuz..."<<endl;
        }
    }
return 0;

}
