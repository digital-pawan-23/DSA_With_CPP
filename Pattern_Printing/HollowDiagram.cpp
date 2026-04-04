#include <iostream>
using namespace std;
int main(){

    int n = 4;

    // top part

    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<"*";
        // for again spaces
        if(i!=1){

        for(int j=1; j<=2*i-3; j++){
            cout<<" ";
        }
        cout<<"*";
    }

    cout<<endl;
}

// bottom Part

for(int i=1; i<=n-1; i++){

    // for spaces

    for(int j=1; j<=i; j++){
        cout<<" ";
    }
    cout<<"*";

    // for again spaces
     if(i!=n-1){
        for(int j=1; j<=2*(n-i)-3; j++){
        cout<<" ";
    }
    cout<<"*";
}

cout<<endl;

}

    return 0;
}