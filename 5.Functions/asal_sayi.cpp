#include <iostream>
using namespace std;

bool asalmi(int x){
	for(int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main()
{
	int c=0;//sayac-- alttaki döngüde i<100 yerine c<verilen sayi girersek o sayiya kadar asal olanlari bulur
	for(int i=2;i<100;i++){ //100 e kadar asal sayilar 
		if(asalmi(i)){
			cout<<i<<endl;
			c++;
		}
	}
}
