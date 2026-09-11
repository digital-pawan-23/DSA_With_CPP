#include <iostream>
#include <vector>
using namespace std;

int rotatedArraySearch(vector<int>arr , int target){
  int st = 0; int end = arr.size()-1;
  while(st<=end){
    int mid = st + (end-st)/2;

    if(arr[mid] == target){
        return mid;
    } 

    if(arr[st]<=arr[mid]){ //Left Part Shoretd
      if(arr[st]<=target && target<=arr[mid]){
        end = mid - 1;
      } else {
        st = mid + 1;
      }
    } else { // Right Part Shorted
        if(arr[mid]<=target && target<=arr[end]){
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
  } 
  return -1;
}

int main(){
  vector<int>nums = {4,5,6,7,0,1,2};
  int target = 0;
  int ans = rotatedArraySearch(nums , target);
  cout<<ans;
}