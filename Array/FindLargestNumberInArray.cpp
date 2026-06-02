#include <iostream>
#include <climits> // for INT_MAIN
using namespace std;
int main(){

    // int marks[5] = {10,44,2,31,9};
    // int largest = INT_MIN;
    // for(int i=0; i<5; i++){
    //  if(marks[i]>largest){
    //     largest = marks[i];
    //  }
    // }
    // cout<<"Largest - "<<largest<<endl;


    // using max function

    
   int marks[5] = {10,44,2,31,9};
    int largest = INT_MIN;
    for(int i=0; i<5; i++){
     largest = max(marks[i],largest);
     }
    cout<<"Largest - "<<largest<<endl;



    return 0;
}