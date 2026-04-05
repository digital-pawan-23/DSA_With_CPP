#include <iostream>
using namespace std;

void CheckPrimeOrNot(int a){
    if(a <= 1){
    cout << "Not Prime Number";
    return;
}
  int i;
  for(i=2; i<=a; i++){
    if(a%i==0){
        break;
    }
  }
  if(i==a){
    cout<<"Prime Number";
  } else{
    cout<<"Not Prime Number";
  }
}

int main(){
int n;
cout<<"Enter Number : ";
cin>>n;
CheckPrimeOrNot(n);
    return 0;
}