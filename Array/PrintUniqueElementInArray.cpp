#include <iostream>
using namespace std;

void printUniqueElemnets(int arr[], int size){
for(int i=0; i<size; i++){
     int count = 0;
    for(int j=0; j<size; j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count == 1){
    cout<<arr[i]<<" ";
}
}
}

int main(){
    int arr[7] = {1,4,5,4,5,6,2};
    printUniqueElemnets(arr,7);
return 0;
}