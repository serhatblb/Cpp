#include<iostream>
#include<math.h>
using namespace std;
int vki,kilo,sacma;
float boy;
main(){
    cout<<"Kilonuzu girin=";
    cin>>kilo;
    cout<<"Boyunuzu metre cinsinden girin=";
    cin>>boy;
    vki=kilo/pow(boy,2);
    if(vki<18.5)
    {
        cout<<"Zayif";
    }
    else if(vki>=18.5 && vki<=24.9)
    {
        cout<<"Normal";
    }
    else if(vki>=25 && vki<=29.9)
    {
        cout<<"Fazla kilolu";
    }
    else if(vki>=30 && vki<=34.9)
    {
        cout<<"1.Derece obez";
    }
    else if(vki>=35 && vki<=39.9)
    {
        cout<<"2.Derece obez";
    }
    else if(vki>40)
    {
        cout<<"3.Derece obez";
    }
    cin>>sacma;
}
