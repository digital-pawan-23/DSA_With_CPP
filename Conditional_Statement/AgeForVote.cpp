#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age - ";
    cin>>age;

    if(age>=18){
        cout<<"You Are Elgible For Voting.";
    } else {
        cout<<"You Are Not Elgible For Voting.";
    }

    return 0;
}