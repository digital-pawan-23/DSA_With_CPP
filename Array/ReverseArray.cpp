#include <iostream>
using namespace std;

void reverseArray(int arr[],int size){
  int start = 0;
  int end = size - 1;
 while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
 }

  }

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    reverseArray(arr,7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}