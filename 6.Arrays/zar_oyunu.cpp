#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;
	cout<<"Kac zar atilacagini girin: ";
	cin>>n;
	srand(time(NULL));
	int a[n];
	int b[n];
	int skor=02;
	for(int i=0;i<n;i++){
		int z1=rand()%6+1;
		int z2=rand()%6+1;
		a[i]=z1;
		b[i]=z2;
		//cout<<z1<<" "<<z2<<endl;
		if(z1>z2){
			skor++;
		}
		else if(z2>z1){
			skor--;
		}
	
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	
	
	if(skor>0){
	
		cout<<"sonuc: 1 kazandi"<<endl;
}
	else if(skor<0){
		cout<<"sonuc: 2 kazandi"<<endl;
	}
	else
	cout<<"berabere"<<endl;
	
	
	
}	
