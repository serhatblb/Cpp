#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>


using namespace std;

int boyut(char *s){
	int b=0;
	char c=s[0];
	while(c!='\0'){
		c=s[++b];// en sonda \0 oldugundan önce arttýrdýk ki o dahil olmasýn
	}
	return b;
}

int main()
{
	char *s="evren";
	cout<<s<<endl;
	cout<<s[3]<<endl;
	char c[6]="evren";
	char a[5];
	a[0]='e';
	a[1]='v';
	a[2]='r';
	cout<<a<<endl;
	cout<<c[1]<<endl;
	
	cout<<boyut(s)<<endl;
	cout<<boyut(c)<<endl;
	cout<<boyut(a)<<endl;
	
	cout<<strlen(c)<<endl;// stringin boyutunu yazan kalýp
	//char *x=(char *)malloc(sizeof(char)*6);
	//strcpy(x,s);//bir stringi baþka stringe kopyalayan yai--<s yi x e kopyala //deep copy
	//cout<<x<<endl;
}
