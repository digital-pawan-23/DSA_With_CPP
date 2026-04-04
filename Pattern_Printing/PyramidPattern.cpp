#include <iostream>
using namespace std;
int main(){

    int n = 4;

    for(int i=1; i<=n; i++){
        // for space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // for num1
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // for num2
        for(int j=i-1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}