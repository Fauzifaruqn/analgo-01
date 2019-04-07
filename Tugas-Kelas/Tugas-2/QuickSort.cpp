/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Kelas : A
Program : Quick Sort
*/

#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);

}
void membuatArray(int A[] , int size){
	for(int i = 0; i < size ; i++){
    	A[i] =  size - i;
	}
}

int main()
{
    int arr[1000] ;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Banyak data : "<<n;

    membuatArray(arr,n);

    auto start = chrono::steady_clock::now();
    quickSort(arr, 0, n-1);
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
	cout << endl <<endl <<"Runtime : " << chrono::duration <double, milli> (diff).count() << " ms" << endl;;

    return 0;
}


