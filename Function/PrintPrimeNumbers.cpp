#include <iostream>
using namespace std;

void PrintPrime(int n){
    for(int i = 2; i <= n; i++){
        int j;
        
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }

        if(j == i){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    PrintPrime(n);

    return 0;
}