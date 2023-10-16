#include <iostream>
using namespace std;

int main()
{
	//matrisin gösterimi
	int a[3][3]={5,4,3,4,0,4,7,10,3};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	/* 1, YOL
	//transpozun alindigi yer 
	int b[3][3];*/
	
	for(int i=0;i+1<3;i++){ //2.yol kullanýlýrken i+1 dedik, 1. yolda sadece i
		for(int j=0;j<3;j++){
			//2,YOL=swap takas operasyonu
		int g=a[j][i];
		a[j][i]=a[i][j];
		a[i][j]=g;
		}
	
	}
	
	//tranpozun gösterimi
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<a[i][j];
		}
	cout<<endl;
	}
}
