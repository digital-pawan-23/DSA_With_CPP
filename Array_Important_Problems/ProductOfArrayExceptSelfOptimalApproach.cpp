#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums = {1,2,3,4,5};
    int n = nums.size();
    vector<int>ans(n,1);

    int leftProduct = 1;
    for(int i=0; i<n; i++){
        ans[i] = leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    for(int i=n-1; i>=0; i--){
        ans[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    for(int val: ans){
        cout<<val<<" ";
    }

   
}