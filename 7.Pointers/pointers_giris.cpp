#include <iostream>
using namespace std;

int main()
{
	int a;
	a=10;
	int *p;
	p=&a;

	cout<<"a: "<<a<<endl;// a degeri
	cout<<"*p: "<<*p<<endl;//gösterdigi yerdeki degeri bas
	cout<<"&a: "<<&a<<endl;//a nın durdugu yerin adresi
	cout<<"p: "<<p<<endl;//p nin point ettigi yerin adresi
	cout<<"&p: "<<&p<<endl;//p nin durdugu yeri adresi
	
	
}
