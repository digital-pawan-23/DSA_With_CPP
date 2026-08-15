#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int>num,int target){
    int n = num.size();
    vector<int>ans;
    int i = 0 , j = n - 1;
    while(i<j){
       int PairSum = num[i] + num[j];
       if(PairSum < target){
        i++;
       }
       if(PairSum > target){
        j--;
       }
       if(PairSum == target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
    }
}
int main(){
vector<int>vec = {6,7,11,15};
int target = 18;
vector<int>ans = PairSum(vec,target);
cout<<ans[0]<<","<<ans[1];
    return 0;
}