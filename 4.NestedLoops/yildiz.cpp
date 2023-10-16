#include <iostream>
using namespace std;
int main()
{
	cout<<"yildiz boyutunu giriniz: ";
	int boyut,i;
	cin>>boyut;
	for(int i=1;i<=boyut;i++){
		for(int k=i;k<i;k++)
			cout<<" ";
	
	for(int j=1;j<=boyut-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
