#include <iostream>
using namespace std;

int DecToBin(int decNum){
    int res = 0 , pow = 1;
    while(decNum>0){
    int rem = decNum % 2;
    decNum = decNum / 2;
    res = res + (rem*pow);
    pow = pow * 10;
    }
    return res;
}

int main(){
int n;
cout<<"Enter Decimal Number : ";
cin>>n;
cout<<"Binary Number is ";
cout<<"Binary Number of "<<n<<" is "<<DecToBin(n);
    return 0;
}