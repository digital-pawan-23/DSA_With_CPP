#include <iostream>
using namespace std;

int sum(int a){
   int count = 0;
   for(int i=1; i<=a; i++){
    count = count + i;
   }
   return count;
}

int main(){
    int n;
    cout<<"Enter NUmber : ";
    cin>>n;
   int ans = sum(n);
   cout<<ans;
   return 0;
}
