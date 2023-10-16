#include <iostream>
using namespace std;

int main()
{
	int a[3]={5,6,2};
	a[0]=6;
	cout<<a[1]+a[0]<<endl;
	
	for(int i=0;i<3;i++){
		cout<<a[i]<<endl;
	}
	
	int b[4];
	b[0]=16;
	b[1]=12;
	cin>>b[2];
	cin>>b[3];
	
	for(int i=0;i<4;i++){
		cout<<b[i]<<endl;
	}
}
