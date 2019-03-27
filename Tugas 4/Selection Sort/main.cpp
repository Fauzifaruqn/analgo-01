/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Program : Selection Sort
*/
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;


void swap(int *xp,int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[],int n)
{

    int i , j ,min_idx;

    //One by one move boudary of unsorted subarray
    for(i = 0;i<n-1;i++)
    {

        //Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
void membuatArray(int A[] , int size){
    for(int i = 0; i < size ; i++){
        A[i] = size - i;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[10000] ;
    int n = sizeof(arr)/sizeof(arr[0]);
    membuatArray(arr,n);

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    selectionSort(arr, n);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout<<endl <<duration <<" microseconds" <<endl;



    return 0;
}
