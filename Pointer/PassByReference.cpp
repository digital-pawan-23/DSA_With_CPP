

// Pass by Reference using pointer

// #include <iostream>
// using namespace std;

// void change(int* p){
//    *p = 20;
// }


// int main(){
//     int a = 5;
//     change(&a);
//     cout<<a;
// }


// Pass by reference using alias(reference)

#include <iostream>
using namespace std;

void change(int &p){
   p = 20;
}


int main(){
    int a = 5;
    change(a);
    cout<<a;
}