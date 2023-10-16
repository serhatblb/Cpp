#include <iostream>
using namespace std;

int toplama(int sayi1, int sayi2){

    return sayi1+sayi2;

}

int main(){

    int x,y;

    cout<< "birinci sayiyi giriniz: ";
    cin>>x;
    cout<< "ikinci sayiyi giriniz: ";
    cin>>y;

    cout<<x<<"+"<<y<<"="<< toplama(x,y);

return 0;




}

