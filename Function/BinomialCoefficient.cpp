#include <iostream>
using namespace std;

int fact(int a){
    int factorial = 1;
    for(int i=1; i<=a; i++){
    factorial = factorial * i;
    }
    return factorial;
}


int main(){
 int n,r;
 cout<<"Enter n : ";
 cin>>n;
 cout<<"Enter r : ";
 cin>>r;
 int BC = fact(n)/(fact(r) * fact(n-r));
 cout<<"Binomial Coefficient is - "<<BC;
    return 0;
}