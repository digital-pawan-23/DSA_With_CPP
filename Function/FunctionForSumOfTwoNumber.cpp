#include <iostream>
using namespace std;

int sum(int a , int b){
  int s = a + b;
  return s;
}

int main(){
    int val = sum(2,3);
    cout<<val;
    return 0;
}