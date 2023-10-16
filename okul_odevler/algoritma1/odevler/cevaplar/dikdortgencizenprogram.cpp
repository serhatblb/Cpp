#include <iostream>
using namespace std;

int main ( )

{	
	
	int secenek;
	cout<<"Enine diktortgen istiyorsaniz 1'e basin"<<endl<<"Boyuna diktortgen istiyorsaniz 2 ye basiniz"<<endl;
	cin>>secenek;
	if(secenek==1){
    int kisaKenar,uzunKenar,bS;
    cout<<"Kisa kenari girin: ";
    cin>>kisaKenar;

    cout<<"Uzun kenari girin: ";
    cin>>uzunKenar;
    cout<<"\n";

    bS=(uzunKenar-2)*2+1;
    kisaKenar=kisaKenar-2;

    for (int i=0; i<uzunKenar; i++)
    {
        cout<<"* ";
    }
    cout<<"\n";

    for(int i=0; i<kisaKenar; i++)
    {
        cout<<"*";
        for(int j=0; j<bS; j++)
        {
            cout<<" ";
        }
        cout<<"*\n";
    }

    for (int i=0; i<uzunKenar; i++)
    {
        cout<<"* ";
    }
    cout<<"\n";
    }
	else{
		    int kisaKenar,uzunKenar,bS;
    cout<<"uzun kenari girin: ";
    cin>>kisaKenar;

    cout<<"Kisa kenari girin: ";
    cin>>uzunKenar;
    cout<<"\n";

    bS=(uzunKenar-2)*2+1;
    kisaKenar=kisaKenar-2;

    for (int i=0; i<uzunKenar; i++)
    {
        cout<<"* ";
    }
    cout<<"\n";

    for(int i=0; i<kisaKenar; i++)
    {
        cout<<"*";
        for(int j=0; j<bS; j++)
        {
            cout<<" ";
        }
        cout<<"*\n";
    }

    for (int i=0; i<uzunKenar; i++)
    {
        cout<<"* ";
    }
    cout<<"\n";
		
	}
    return 0;
}

