#include <iostream>
#include <climits> // for INT_MAIN
using namespace std;
int main(){

    int marks[5] = {10,44,2,31,9};
    int smallest = INT_MAX;
    int smallestIndex;
    for(int i=0; i<5; i++){
     if(marks[i]<smallest){
        smallest = marks[i];
        smallestIndex = i;
     }
    }
    cout<<"Smallest - "<<smallest<<endl;
    cout<<"Smallest Index - "<<smallestIndex<<endl;
    return 0;
    }
