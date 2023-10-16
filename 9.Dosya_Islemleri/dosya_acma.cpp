#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//yazma
	ofstream dosya; //open file-->dosya gosterici
	dosya.open("deneme.txt");
	if(dosya.is_open()){
		dosya<<"Serhat Bulbul\n";
		dosya.close();
	}
	else{
		cout<<"dosya acilamadi"<<endl;
	}

		//okuma
	string satir;
	ifstream dosya2("deneme.txt");
	if(dosya2.is_open()){
		while(getline(dosya2,satir))
		{
		cout<<satir<<'\n';
		}
		dosya2.close();
	}
	
}
