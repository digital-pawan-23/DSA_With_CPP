#include <iostream>
using namespace std;

int reverse(int x){
int rev = 0;
while(x>0){
    int ld = x%10;
    rev = (rev*10) + ld;
    x = x/10;
}
return rev;
}   

int main(){
int n;
cout<<"Enter Number :";
cin>>n;
int ans = reverse(n);
cout<<ans;

    return 0;
}