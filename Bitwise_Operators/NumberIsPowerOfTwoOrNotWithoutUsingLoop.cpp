#include <iostream> 
using namespace std;
int main(){

int n;
cout<<"Enter Number :";
cin>>n;

if(n>0 && ((n & (n-1)) == 0)){
    cout<<"Power of two.";
}
else{
cout<<"Not Power of two.";
}
return 0;
}