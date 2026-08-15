#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int>num,int target){
    int n = num.size();
    vector<int>ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          if(num[i]+num[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
          }
        }
    }
}
int main(){
vector<int>vec = {2,7,11,15};
int target = 9;
vector<int>ans = PairSum(vec,target);
cout<<ans[0]<<" "<<ans[1];
    return 0;
}