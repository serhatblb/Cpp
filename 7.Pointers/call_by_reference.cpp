#include <iostream>
using namespace std;

int f(int *x,int *y){ //call by reference
	*x=20;
	*y=40;
}
int main()
{
	int a=10;
	int b=8;
	int *p;
	int *q;
	p=&a;
	q=&b;
	cout<<a<<" "<<b<<endl;
	f(p,q);
	cout<<a<<" "<<b<<endl;
	cout<<*p<<" "<<*q;
}
