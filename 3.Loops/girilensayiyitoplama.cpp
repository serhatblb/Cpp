
#include <iostream>
using namespace std;
int main()
{
   int sayi;
   int x=1,toplam=0;
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   cout<<"Sayýyý Gir : ";
   cin>>sayi;
   
   while (true)
	{
	if(x>sayi)
	{
	break;
	}
	toplam+=x;	
	x++;
	}
		cout<<toplam<<endl;
}
