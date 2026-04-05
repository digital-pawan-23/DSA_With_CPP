#include <iostream>
using namespace std;

void changeX(int x){
x = x + 10;
 cout<<"a = "<<x<<endl;
}
int main(){
    int x = 5;
    changeX(x);
    cout<<"x = "<<x;
    return 0;
}