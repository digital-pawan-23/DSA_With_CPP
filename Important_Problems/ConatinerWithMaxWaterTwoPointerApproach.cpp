#include <iostream>
#include <vector>
using namespace std;
int main(){
 int maxWater = 0;
 vector<int>water = {1,8,6,2,5,4,8,3,7};
 int left = 0;
 int right = water.size() - 1;
 while(left<right){
    int width = right - left;
    int height = min(water[left], water[right]);
    int area = width * height;
    maxWater = max(maxWater, area);
    water[left] < water[right] ? left++ : right--;
 }
 cout<<"Container With Maximum Water is : "<<maxWater;
}