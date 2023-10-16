#include <iostream>
using namespace std;

int main()
{

int r;
r=(5.^(0.5)-1)/2;
xl=0;
xu=4;
i=1;

for (i=1;1;20){

d=r*(xu-xl)
x1=xl+d;
x2=xu-d;
f1=(2*sin(x1)-(x1.^2)/10);
f2=(2*sin(x2)-(x2.^2)/10);
    if f1>f2
        x1=x2;
    elseif f2>f1
        xu=x1;
}
x=(x1+xu)/2;
f=(2*sin(x)-(x.^2)/10);
}
