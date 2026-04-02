#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    if(n <= 1) {
        cout << "Neither Prime Nor Composite";
    } else {
        int i;
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                break;
            }
        }

        if(i == n) {
            cout << "Prime Number";
        } else {
            cout << "Composite Number";
        }
    }

    return 0;
}