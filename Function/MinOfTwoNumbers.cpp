#include <iostream>
using namespace std;

int min(int a , int b){ // parameters
    if(a>b){
        return b;
    } else{
        return a;
    }
}

int main(){
  int minimum = min(40,432); // arguments
  cout<<minimum;
    return 0;
}