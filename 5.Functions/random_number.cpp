#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
	// Random Number Generator-- Rastgele sayý üretimi
	
	int rg;
	srand(time(NULL)); //seed--> sayi üretirken zamaný kullan
	rg=rand() %2; // yazý tura için iki sayi
	cout<<rg<<endl;
	rg=rand() %6+1;//1 ile 6 arasý random sayi, zar gibi
	cout<<rg<<endl;
	rg=rand()%100;//0 ve 100 arasý sayi
	cout<<rg;
}
