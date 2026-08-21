#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ME(vector<int>nums){
   int n = nums.size();
   sort(nums.begin() , nums.end());
   int count = 1; 
   int ans = nums[0];
   for(int i=0; i<n; i++){
    if(nums[i]==nums[i+1]){
      count++;
    } else {
        count = 1;
        ans = nums[i+1];
    }
    if(count>n/2){
        return ans;
    }
}
}

int main(){
vector<int> vec = {1,2,2,1,1};
cout<<"Majority Element is : "<<ME(vec);
    return 0;
}