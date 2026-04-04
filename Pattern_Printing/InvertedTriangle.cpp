#include <iostream>
using namespace std;
int main(){

    int n = 4;

    // Start From 1.

    for(int i=1; i<=n; i++){

        // for spaces
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
            // for Numbers
             for(int j=1; j<=n-i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }
        

    return 0;
}