
#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<100;i+=2){
		cout<<i<<" ";
	}
	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	
//ORNEK 2
//50-70 ARASI ÇIFT SAYILAR

	for(int i=50;i<=70;i++){
		if(i%2==0)
		cout<<i<<" ";
	}

	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	
//ORNEK 3
// 100 DE 70 KADAR OLAN 7 YE BÖLÜNEBÝLEN SAYILAR

	for(int a=100;a>=70;a--){
		if(a%7==0)
		cout<<a<<endl;
	}



}


