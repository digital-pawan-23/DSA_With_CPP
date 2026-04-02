#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number : ";
cin>>n;
int sum = 0;

//Using For Loop
// for(int i=1; i<=n; i++){
//    sum = sum + i;
// }
// cout<<"Sum = "<<sum;

//Using While Loop
int i = 1;
while(i<=n){
     sum = sum + i;
     i++;
}
cout<<"Sum = "<<sum;

    return 0;
}