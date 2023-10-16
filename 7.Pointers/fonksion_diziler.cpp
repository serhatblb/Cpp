#include <iostream>
using namespace std;

int f(int *p){
	p[2]=10;
}

int topla(int *a,int boyut){
	int toplam=0;
	for(int i=0;i<boyut;i++){
		toplam+=a[i];
	}
	return toplam;
}

int main()
{
	int a[3]={1,2,3};
	cout<<"toplam: "<<topla(a,3)<<endl;
	cout<<a[2]<<endl;

	f(a);
	cout<<a[2]<<endl;
	cout<<"toplam: "<<topla(a,3)<<endl;
	
}
