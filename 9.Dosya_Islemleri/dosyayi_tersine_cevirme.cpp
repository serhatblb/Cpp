#include <iostream>
#include <fstream>
using namespace std;

string ters(string s){
	char c=s[0];
	int i=1;
	char *p,*q;
	p=&s[0];
	q=&s[0];
	while(*p!='\0'){
		p++;
	}
	p--;
	while(p>q){
		char c=*p;
		*p=*q;
		*q=c;
		p--;
		q++;
	}
	return s;
}
int main()
{
	ifstream girdi("C:\\Users\\Serhat\\Desktop\\DevC++\\9.Dosya_Islemleri\\debug\\girdi.txt");
	string s;
	ofstream cikti("cikti.txt");
	while(getline(girdi,s)){
		//cout<<s<<endl;
		//cout<<"deneme: "<<ters(s)<<endl;
		cout<<endl;
		cout<<ters(s)<<endl;
		cikti<<ters(s)<<endl;
	}
	girdi.close();
	cikti.close();
}
