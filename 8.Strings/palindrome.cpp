#include <iostream>
using namespace std;
/*palindrome: bastan ve sondan okunması aynı olan kelimeler
aba
assa
anastasmumsatsana
*/
int main()
{
	cout<<"Lutfen bir dizgi giriniz: "<<endl;
	char c[100];
	cin>>c;
	char *p,*q;
	p=c;
	q=c;
	while(*q!='\0'){
		q++; //dizgi sonu
	}
	q--;//dizginin son elemanı
	bool palindrome=true;
	while(q>p){
		if(*p!=*q){
			palindrome=false;
		}
		p++;
		q--;
	}
	if(palindrome){
		cout<<"girilem dizgi bir palindromedur"<<endl;
	}
	else
		cout<<"girilem dizgi bir palindrome degildir"<<endl;
}
