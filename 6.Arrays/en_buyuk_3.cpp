#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a[7]={3,7,2,8,9,1,6};
	
	int toplam=0;
	int carpim=1;
	
	for(int i=0;i<7;i++){
		toplam +=a[i];
		carpim *=a[i];
	}
cout<<"aritmatik ortalama: "<<(float)toplam/7<<endl;
cout<<"geometrik ortalama: "<<pow(carpim,(float)1/7)<<endl;
	/*int as=a[0];
	for(int i=1;i<7;i++){
		if(as<a[i]){
			as=a[i];
		}
	}
	cout<<"en buyuk: "<<as;
	
	*/
}
