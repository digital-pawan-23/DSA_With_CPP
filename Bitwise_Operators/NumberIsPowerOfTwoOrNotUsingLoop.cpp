#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;
    while(n>1){
        if(n%2 != 0){
            cout<<"Not Power Of Two.";
        }
        else{
            n = n >> 1;
        }
    }
    cout<<"Power Of Two.";
    return 0;
}