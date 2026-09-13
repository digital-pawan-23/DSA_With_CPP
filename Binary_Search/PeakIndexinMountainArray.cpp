// Linear Search 

// #include <iostream>
// #include <vector>
// using namespace std;

// int linearSearch(vector<int> arr){
//  int n = arr.size();
//  for(int i=1; i<n-1; i++){
//     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//         return i;
//     }
//  } 
//    return -1;
// }

// int main(){
//     vector<int> vec = {0,3,8,9,5,2};
//     int ans = linearSearch(vec);
//     cout<<ans;
// }


// Optimize Approach - Binary Search

#include <iostream>
#include <vector>
using namespace std;


int peakIndex(vector<int>arr){
    int st = 1; int end = arr.size()-2;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        } 
        if(arr[mid-1]<arr[mid]){
            st = mid+1;
        } else {
            end = mid-1;
        }
    } 
    return -1;
}



int main(){
  vector<int> vec = {0,3,8,9,5,2};
  int ans = peakIndex(vec);
  cout<<ans;
}




