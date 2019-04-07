/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Kelas : A
Program : Pencarian Biner
*/

#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}
void membuatArray(int A[] , int size){
	for(int i = 0; i < size ; i++){
    	A[i] =  i+1;
	}
}
int main(void)
{
    int arr[1000];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Banyak data : "<<n;

	membuatArray(arr,n);
    int x = 1000;
	cout<<"\nData yang dicari adalah : "<<x;
    auto start = chrono::steady_clock::now();
	binarySearch(arr, 0, n - 1, x);
	auto end = chrono::steady_clock::now();
    auto diff = end - start;
	cout << endl <<endl <<"Runtime : " << chrono::duration <double, milli> (diff).count() << " ms" << endl;;

    (binarySearch(arr, 0, n - 1, x) == -1) ? cout << "Element tidak ada dalam array"
                   : cout << "Element ada pada index ke " << binarySearch(arr, 0, n - 1, x);
    return 0;
}

