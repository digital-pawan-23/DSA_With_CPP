#include <iostream>
using namespace std;

void IntersectionOfTwoArray(int arr[],int brr[],int size){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(arr[i]==brr[j]){
                    cout<<arr[i]<<" ";
                }
            }
        }
}
  int main(){
    int arr[5] = {1,3,5,8,2};
    int brr[5] = {2,6,5,1,9};
    IntersectionOfTwoArray(arr,brr,5);
    return 0;
}