/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Kelas : A
Program : Pencarian Linear
*/

#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
int linearSearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
    	if (arr[i] == x)
        	return i;
	return -1;
}
void membuatArray(int A[] , int size){
	for(int i = 0; i < size ; i++){
    	A[i] =  i+1;
	}
}

int main()
{
	int arr[1000];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Banyak data : "<<n;

	membuatArray(arr,n);
	int x = 1000;
	cout<<"\nData yang dicari adalah : "<<x;
    auto start = chrono::steady_clock::now();
	linearSearch(arr, n, x);
	auto end = chrono::steady_clock::now();
    auto diff = end - start;
	cout << endl <<endl <<"Runtime : " << chrono::duration <double, milli> (diff).count() << " ms" << endl;;

   (linearSearch(arr, n, x) == -1)? cout<<"Element tidak ada dalam array"
             	: cout<<"Element tidak ada dalam array:  " <<linearSearch(arr, n, x);
   return 0;
}
