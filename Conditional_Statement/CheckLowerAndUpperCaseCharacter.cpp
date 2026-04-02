#include <iostream>
using namespace std;
int main(){
  char n;
  cout<<"Enter Charcter :";
  cin>>n;

  if(n>=65 && n<=90){
    cout<<"UpperCase"; 
  } else{
     cout<<"LowerCase"; 
  }

  return 0;
}