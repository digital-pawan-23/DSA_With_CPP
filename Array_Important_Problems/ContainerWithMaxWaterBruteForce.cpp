#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>water = {1,8,6,2,5,4,8,3,7};
    int n = water.size();
    int maxWater = 0;
    for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
      int width = j - i;
      int height = min(water[i],water[j]);
      int area = width * height;
      maxWater = max(maxWater,area);
     }
    }
    cout<<"Container With Maximum Water is : "<<maxWater;
}