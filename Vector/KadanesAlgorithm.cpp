#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int maxSum = INT_MIN;
    int CurrentSum = 0;
    for(int i=0; i<n; i++){
       CurrentSum = CurrentSum + arr[i];
       maxSum = max(CurrentSum , maxSum);
       if(CurrentSum<0){
        CurrentSum = 0;
       }
    }
    cout<<"Max Sum is : "<<maxSum;
    return 0;
}