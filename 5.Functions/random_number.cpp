#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
	// Random Number Generator-- Rastgele say� �retimi
	
	int rg;
	srand(time(NULL)); //seed--> sayi �retirken zaman� kullan
	rg=rand() %2; // yaz� tura i�in iki sayi
	cout<<rg<<endl;
	rg=rand() %6+1;//1 ile 6 aras� random sayi, zar gibi
	cout<<rg<<endl;
	rg=rand()%100;//0 ve 100 aras� sayi
	cout<<rg;
}
