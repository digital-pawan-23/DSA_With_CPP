#include <iostream>
using namespace std;

int SumOfDigit(int Num){
int count = 0;
while(Num>0){
int Num1 = Num%10;
count = count + Num1;
Num = Num/10;
    }
    return count;
}

int main(){
int n;
cout<<"Enter Number : ";
cin>>n;
int res = SumOfDigit(n);
cout<<"Total Sum = "<<res;

    return 0;
}