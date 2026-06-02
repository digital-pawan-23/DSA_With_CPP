#include <iostream>
#include <climits>
using namespace std;


void swapmaxmin(int arr[],int size){
   int smallest = INT_MAX;
   int largest = INT_MIN;
   int minindex;
   int maxindex;
   for(int i=0; i<size; i++){
    if(arr[i]<smallest){
        smallest = arr[i];
        minindex = i;
    }
   }
   for(int i=0; i<size; i++){
    if(arr[i]>largest){
        largest = arr[i];
        maxindex = i;
    }
   }
   swap(arr[maxindex],arr[minindex]);
}


int main(){
    int arr[] = {27,78,12,9,98,53};
    swapmaxmin(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}