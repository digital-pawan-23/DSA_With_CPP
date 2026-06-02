#include <iostream>
#include <climits> // for INT_MAIN
using namespace std;
int main(){

    // int marks[5] = {10,44,2,31,9};
    // int smallest = INT_MAX;
    // for(int i=0; i<5; i++){
    //  if(marks[i]<smallest){
    //     smallest = marks[i];
    //  }
    // // }
    // cout<<"Smallest - "<<smallest<<endl;


    // using min function

    
    int marks[5] = {10,44,2,31,9};
    int smallest = INT_MAX;
    for(int i=0; i<5; i++){
    smallest = min(smallest,marks[i]);
    }
    cout<<"Smallest - "<<smallest<<endl;


    return 0;
}