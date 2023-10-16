#include <iostream>
using namespace std;

int main()
{
	int a[2][2]={{1,2},{3,4}};
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int b[3][3];
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			b[i][j]=i+j;
		 }
		 
	 }

	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cout<<b[i][j]<<" ";
 		}
	cout<<endl;
 	}
 	
}
