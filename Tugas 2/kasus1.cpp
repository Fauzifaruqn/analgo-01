/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Program : Mencari nilai Max
*/

#include <iostream>
using namespace std;

int main()
{
    int el [5] = {1,2,10,4,5};
    int panjangArr = sizeof(el)/sizeof(el[0]);
    int maks = el[0];
    int i = 2;
    while(i<panjangArr){
        if(el[i] > maks){
            maks = el[i];
        }
        i++;
    }
    cout<<"Nilai Maks adalah : "<<maks;
}
