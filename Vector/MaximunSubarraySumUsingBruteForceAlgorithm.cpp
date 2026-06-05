#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;
     int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
       int CurrentSum = 0;
     for(int end=start; end<n; end++){
        CurrentSum =  CurrentSum + arr[end];
        maxSum = max(CurrentSum , maxSum);
     }
    }
    cout<<"Max Sum is : "<<maxSum;
    return 0;
}