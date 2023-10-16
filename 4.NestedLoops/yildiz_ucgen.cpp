#include <iostream>
using namespace std;
int main()
{
/*	cout<<"bir sayi gir: ";
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
	
		for(int j=0;j<i+1;j++)
			cout<<"*";
	
	cout<<endl;
	}

*/
//TERS UCGEN
	cout<<"bir sayi gir: ";
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
		for(int j=0;j<b-(i+1);j++) //bosluklar
			cout<<" ";
		for(int j=0;j<i+1;j++)		//yildýzlar
			cout<<"*";
	
	cout<<endl;
	}

	
	
	
	
	
		
}
