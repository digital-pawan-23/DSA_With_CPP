#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>vec = {4, 6, 17, 11, 23, 89, 7};
    int target = 11;
    for(int val : vec){
        if(val==target){
        cout<<val;
        break;
        }
    }
    return 0;
}