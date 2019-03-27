/*
Nama : Fauzi Faruq Nabbani
Tanggal : 18 Maret 2019
Program : Pangkat
*/

#include <iostream>
using namespace std;

int main()
{
    int x1,x2;
    cout<<"Masukan x1 : ";
    cin>>x1;
    cout<<"Masukan x2 : ";
    cin>>x2;

    int hasil = 1;

    for(int i = 0;i < x2;i++){
        hasil = hasil*x1;

    }
    cout<<"Hasil pangkat dari "<<x1<<" pangkat "<<x2<<" adalah : "<<hasil;
}
