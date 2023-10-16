#include <iostream>
using namespace std;


	int f(int x){
		
		cout<<x<<endl;
		return 5;
	}

	void g(int x){
		
		cout<<x+5<<endl;
	}
	
	
	int main()
	{
	cout<<f(5)<<endl;
	cout<<f(656)<<endl;
	g(10);
	}
