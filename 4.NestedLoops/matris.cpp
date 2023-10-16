#include <iostream>
using namespace std;
int main()
{
	int b;
	cout<<"boyutu griniz: "<<endl;
	cin>>b;
	
	for(int i=0;i<b;i++){
	
		for(int j=0;j<b;j++){
			if(i+j>=b-1)
				cout<<" 1 ";
			else 
			cout<<" 0 ";	
			
		}
	cout<<endl;
	}	
}
