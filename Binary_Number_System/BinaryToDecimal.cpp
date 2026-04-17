#include <iostream>
using namespace std;

int BintoDec(int n){
    
    int res = 0 , pow = 1;
    while(n > 0){
    int LD = n % 10; // Find Last Digit.
    if(LD != 0 && LD != 1){
            return -1;
        }
    res = res + (LD*pow);
    pow = pow * 2;
    n = n / 10;
    }
    return res;
}

int main(){
int n;
cout<<"Enter Binary Number :";
cin>>n;
int ans = BintoDec(n);
if(ans == -1){
    cout << "Invalid Binary Number";
}else{
    cout << "Decimal Number is - " << ans;
}
return 0;
}