#include <iostream>
using namespace std;
int main (){
    int r;
    float phi=3.14,luas,keliling;

    cout<<"masukan jari jari lingkaran : ";
    cin>>r;
    cout<<endl;

    luas=phi*r*r;
    keliling=2*phi*r;

    cout<<"luas lingkaran adalah : " <<luas<<endl;
    cout<<endl;
    cout<<"keliling lingkarn adalah : " <<keliling<<endl;
    return 0;

}
