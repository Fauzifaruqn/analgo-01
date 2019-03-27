#include <iostream>
#include <conio.h>
using namespace std;

int main(){

//deklarasi variable

int data[10];
int index[10];
int i,j,x,n;

    //proses penginputan data

cout<<"Masukan jumlah data : ";
cin>>n;

for(i= 0;i<n;i++){
    cout<<"Masukan data ke- "<<[i + 1]<<" ";
    cin>>data[i];
}

    //Masukan data yang akan dicari ke dalam K

cout<<"Masukan data yang akan dicari : ";
cin>>x;

j = 0; //Inisiasi data yang akan dicari sebelum dilakukan proses pencarian

for(i=0;i<n;i++){
        if(data[i] == x){
            index[j] =i;
            j++;
        }
}
// Jika data ditemukan dalam array
if(j>0){
    cout<<"Data " <<x<< " yang dicari ada "<<j<<" buah "<<endl;
    cout<<"Data tersebut terdapat dalam index ke : ";
    for(i=0;i<j;i++){
        cout<<index[i]<<" ";
    }
    cout<<endl;
}

//Jika tidak ditemukan
    else{
        cout<<"Data tidak ditemukan di dalam array"<<endl;
    }
    getch();


}
