#include <iostream>
using namespace std;

int main(){
	string takim;
	int skor1,skor2,puan,i=0;
	
	while(i<3){
		cout<<"Takim ismi: ";
		cin>>takim;
		puan=0;
			for(int j=1;j<=5;j++){
				cout<<j<<". macin skoru: ";
				cin>>skor1>>skor2;
				if(skor1>skor2) puan=puan+3;
				else if(skor1==skor2) puan++;
		 
			}
			cout<<takim<<" takiminin puani: "<<puan<<endl;
	i++;
	}
	
return 0;

}

