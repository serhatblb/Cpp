#include <iostream>
#include <cstdlib>
using namespace std;

				//Pointeri dzi gibi kullanma
int main()
{
	int a[3];
	int *p=(int *)malloc(sizeof(int)*3);// malloc hafýzada yer ayýrmaya yarar
	p[2]=6;
	cout<<p[2]<<endl;
}
