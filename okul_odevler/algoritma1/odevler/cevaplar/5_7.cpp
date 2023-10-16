#include <iostream>
using namespace std;

int main(){
	while(true){ // tekrar tekrar calıssın diye
	
	int isidegeri;
	cout<< "Isi Degerini Giriniz: ";
	cin>>isidegeri;
	
	if(isidegeri<=30)
		cout<<"Problem Yok"<<endl;
	else if(isidegeri>=30 && isidegeri<60)
		cout<<"Yuksek isi !!"<<endl;
	else if (isidegeri>=60){
		cout<<"itfayeyi Cagir!!"<<endl;
	}
}
}
