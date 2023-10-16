#include <iostream>
using namespace std;

//a*b=a+a+a+...+a // b kadar toplama
//f(a,b)=a+a+a+...+a // b kadar toplama
//f(a,b-1)=+a+a+...+a // b-1 kadar toplama
//f(a,b)= a + f(a,b-1)
//
//f(a,0)=0

int carpimR(int a,int b){ //1.bitis,2.adým,3.baslangýc durumu
	if(b==0||a==0)
		return 0;
	if(b<0)
		return carpimR(0-a,0-b);
	return a+carpimR(a,b-1);
}

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<carpimR(a,b)<<endl;
}

