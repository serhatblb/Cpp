#include <iostream>
using namespace std;
//g=9.80665
void serbestDusme(float velociyt,float time,float high){
    float g=9.80665;

    time=velociyt/g;
    high=(velociyt*velociyt)/(2*g);
    cout<< "Zaman: "<<time<<" s"<<endl;
    cout<< "Yukseklik: "<<high<<" m"<<endl;
}


int main(){
    float g=9.80665;
    float hiz,zaman,yukseklik;
    cout<< "Hiz (m/s) giriniz: ";
    cin>>hiz;
    serbestDusme(hiz,zaman,yukseklik);

    return 0;

}
