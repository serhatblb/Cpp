#include <iostream>
using namespace std;
int main()
{
	cout<<"Carpim tablosunun boyutunu giriniz: ";
	int boyut;
	cin>>boyut;
	for(int i=1;i<=boyut;i++){
		
		for(int j=1;j<=boyut;j++){
			cout<<i * j<<",";
		}
		cout<<endl;
}
	
}
