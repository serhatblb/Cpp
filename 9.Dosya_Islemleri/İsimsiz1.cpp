#include <iostream>

using namespace std;

int main()
{
    int matris[3][3]= {{2,6,1},{5,7,9},{6,8,2}};

            for(int i=0;i<3;i++){
                for(int k=0;k<3;k++){
                    cout<<matris[i][k]<<" ";
                }
                cout<<endl;
    return 0;
}
}
