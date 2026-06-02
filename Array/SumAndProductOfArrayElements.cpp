#include <iostream>
using namespace std;

int sum(int arr[] , int size){
    int add = 0;
    for(int i=0; i<size; i++){
        add = add + arr[i];
    }
    return add;
}
int mul(int arr[] , int size){
    int multiplication = 1;
    for(int i=0; i<size; i++){
        multiplication = multiplication * arr[i];
    }
    return multiplication;
}
int main(){
int arr[] = {1,2,3,4,5};
cout<<"Sum = "<<sum(arr,5)<<endl;
cout<<"Multiplication = "<<mul(arr,5);

}