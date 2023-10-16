#include <iostream>

using namespace std;

int main() {
	cout<<"*****ALINAN NOTLARIN HARF KARSILIGI*****"<<endl;
	int n;
	cout<<"Alinan notu giriniz = ";
	cin>>n;
		if(n>0 && n<50){
			cout<<"Alinan Notun Harf Karsiligi = F "<<endl;
			
		}
		else if(n>=50 && n<70){
			cout<<"Alinan Notun Harf Karsiligi = C "<<endl;
		}
		else if(n>=70 && n<90){
			cout<<"Alinan Notun Harf Karsiligi = B "<<endl;
		}
		else {
			cout<<"Alinan Notun Harf Karsiligi = A "<<endl;
		}
		
}
