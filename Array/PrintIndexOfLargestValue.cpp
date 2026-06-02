#include <iostream>
#include <climits> // for INT_MAIN
using namespace std;
int main(){

    int marks[5] = {10,44,2,49,9};
    int largest = INT_MIN;
    int largestIndex;
    for(int i=0; i<5; i++){
     if(marks[i]>largest){
        largest = marks[i];
        largestIndex = i;
     }
    }
    cout<<"Largest - "<<largest<<endl;
    cout<<"LargestIndex - "<<largestIndex<<endl;

  return 0;
}

  
