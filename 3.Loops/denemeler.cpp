#include <iostream>
using namespace std;
int main()
{



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
	
	
}
