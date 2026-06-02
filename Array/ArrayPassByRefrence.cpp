#include <iostream>
using namespace std;

int ChangeArr(int arr[] ,int size){
    cout<<"in ChangeArr Function\n";
for(int i=0; i<size; i++){
    arr[i] = 2 * arr[i];
}
}

int main(){
    int arr[] = {1,2,3};
    ChangeArr(arr,3);
    cout<<"in Main Function\n";
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}