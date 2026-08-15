#include <iostream>
#include <vector>
using namespace std;

int ME(vector<int>nums){
    int n = nums.size();
    int freq = 0; 
    int ans = 0;

    for(int i=0; i<n; i++){
        if(freq==0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        } 
        
        else {
            freq--;
        }

        return ans;
    } 
}


int main(){
vector<int>vec = {1,2,2,1,1};
cout<<"Mejority Element is : "<<ME(vec);
}