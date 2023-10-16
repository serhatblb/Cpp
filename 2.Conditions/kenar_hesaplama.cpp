#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"birinci kenari giriniz= ";
	cin>>a;
	cout<<"ikinci kenari giriniz= ";
	cin>>b;
	c=(sqrt)(a*a+b*b);
	cout<<"hipotenus= "<<(float)c<<endl;
	cout<<"cevresi= "<<a+b+c<<endl;
	cout<<"alani= "<<(float)a*b/2;
	
}
