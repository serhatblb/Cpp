#include <iostream>
using namespace std;

int ust(int taban, int us){
	int sonuc=1;
	for(int i=1;i<=us;i++){
		
		sonuc=sonuc*taban;	
	}
	return sonuc;
}



int main()
{
	for(int i=1;i<=20;i++){
		cout<< ust(2,i)-1<<endl;
	}
	
}
