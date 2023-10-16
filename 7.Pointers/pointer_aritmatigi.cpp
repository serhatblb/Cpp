#include <iostream>
#include <cstdlib>

using namespace std;
		/* Pointer kullanarak kullanýcýdan 5 sayi okuyunuz ve sonra okunan degerleri ekrana geri basiniz
		1.cozum: Dizi ile
		2.cozum: Dinamik hafiza ile
		3.cozum: pointer aritmatigi ile */

int main()
{	/*
	//COZUM 1
	
	cout<<"***5 sayi giriniz***"<<endl;
	int a[5];
	for(int i=1;i<=5;i++){
		cout<<i<<". sayi: ";
		cin>>a[i];
	}
	for(int i=1;i<=5;i++){
		
		cout<<a[i]<<" ";
	}
	cout<<endl; */
	
	/*
	//COZUM 2
	cout<<"5 sayi giriniz: "<<endl;
	int *p;
	p=(int *)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>>p[i];
	}
	for(int i=0;i<5;i++){
		cout<<p[i]<<" ";
	}
	
	*/
		//COZUM 3
		
	cout<<"5 sayi giriniz: "<<endl;
	int *p;
	p=(int *)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		cin>>*(p+i);
	}
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<" ";
	}
}


