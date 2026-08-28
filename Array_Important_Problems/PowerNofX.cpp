#include <iostream>
using namespace std;

int Pow(int binForm , int x){

    int ans = 1;

    if(binForm < 0){
        x = 1 / x;
        binForm = -binForm;
    }

    while(binForm > 0){
    if(binForm % 2 == 1){
        ans = ans * x;
    } 
     x = x * x;
     binForm = binForm/2;
   }

   return ans;
}

    int main(){
      int x;
      int n;
      cout<<"Enter x - ";
      cin>>x;
      cout<<"Enter n - ";
      cin>>n;
      int val = Pow(n , x);
      cout<<"The Value is : "<<val;
}