/*
Nama : Fauzi Faruq Nabbani
NPM : 140810160007
Program : Binary Search
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i , j , mid;
    bool found;
    int idx;
    int y = 3;

    i = 1;
    j = sizeof(arr)/sizeof(arr[0]);
    found = false;
    while(!found && i <= j){
        mid  = (i + j)/2;
        if(arr[mid] == y){
            found = true;
        }
        else if(arr[mid]< y){
                i = mid + 1;
        }
        else{
            j = mid - 1;
        }
    }
    if(found == true){
        idx = mid;
    }
    else{
        idx = 0;
    }
    cout<<idx;
    return 0;
}