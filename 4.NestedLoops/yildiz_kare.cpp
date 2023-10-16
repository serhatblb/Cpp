#include <iostream>
using namespace std;
int main()
{
	cout<<"bir sayi gir: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y,b;
		if(i<=n/2){
			y=2*i+1;
		}
		else{	
			y=2*(n-i-1)+1;
		}
		b=(n-y)/2;
		for(int j=0;j<b;j++){ //bosluklar
			cout<<" ";
		}
		for(int j=0;j<y;j++){		//yildýzlar
			cout<<"*";
		}
	cout<<endl;
	}
	
	
	
	
	
	
}
