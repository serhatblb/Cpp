#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	cout<<"Lutfen 12'lik sistemde bir saat giriniz: "<<endl;
	char s[11];
	cin>>s;
	if(s[8]=='P'){
	char x[3];
	x[0]=s[0];
	x[1]=s[1];
	x[2]='\0';

	int saat=atoi(x); //atoi char ý int e ceviriyor
	saat+=12;
	s[0]=(char)48+saat/10;
	s[1]=(char)48+saat%10;
	s[8]='\0';
	cout<<s;
	}
	else{
		s[8]='\0';
		cout<<s<<endl;
	}

}
