#include <iostream>
#include <vector>
using namespace std;

int ME(vector<int>mej){
   int n = mej.size();

   for(int i=0; i<n; i++){
    int count = 0;
    for(int j=i; j<n; j++){
        if(mej[i]==mej[j]){
            count++;
        }
    }
        if(count>n/2){
            return mej[i];
        }
    }
    return -1;
   }

int main(){
vector<int>vec = {1,2,2,1,1};
cout<<"Majority Elements is : "<<ME(vec);
}