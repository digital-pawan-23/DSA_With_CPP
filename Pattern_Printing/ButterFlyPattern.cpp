#include <iostream>
using namespace std;
int main(){

    int n = 4;

    // for top part

    for(int i=1; i<=n; i++){
        // for stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // for spaces
        if(i!=n){
         for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
         }
        }
        // for stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for bottom part

    for(int i=1; i<=n; i++){
        // for stars
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }

        if(i!=1){
        for(int j=1; j<=2*i-2; j++){
            cout<<" ";
        }
    }
    for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}