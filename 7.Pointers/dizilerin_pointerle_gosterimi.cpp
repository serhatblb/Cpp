#include <iostream>
using namespace std;

int main()
{
	int a[3]={1,2,3};
	int *p;
	//int *p=&a[0];
	p=a;
	cout<<p[2];
}
