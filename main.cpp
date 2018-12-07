#include <iostream>

using namespace std;

 int suku, a, b, c;

     int main()
     {
     cout<<"Membuat fungsi rekursif dengan cara interaktif\n";
     cout<<"Masukkan nilai suku ke-: ";cin>>suku;

     cout<<"Bilangannya adalah: \n";
     a=suku;b=suku;
     cout<<a<<endl;

     for(int i=1; i<=suku; i++)
    {
    c = a * b;
    a = b;
    b = c;

     cout<<c<<endl;
     }
    return 0;
     }
