#include <iostream>
using namespace std;
int main()
{


int n;
	cout<<"Bir sayi giriniz: ";
	cin>>n;
	
	int a=1;
	int b=1;
	if(n==1)
		cout<<1;
	
	else if(n<=0);
	
	else{	
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<n;i++){
	
		int c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	}
}
