#include <iostream>
using namespace std;

	//recursive fonksiyonlar faktoriyel
	int faktoriyel (int n){
		if(n==1)
			return 1;
		return n*faktoriyel(n-1);
	}
	
	int main(){
		
		cout<<faktoriyel(5);

	}
