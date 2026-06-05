#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec = {3,0,1};
    int ans = vec.size();
    int i = 0;
    for(int val: vec){
     ans = ans ^ i;
     ans = ans ^ val;
     i++;
    }
    cout<<ans;
}
