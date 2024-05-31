#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    bool isEqual = (a == b);      // false
   bool isGreaterThan = (a < b);  // true

    cout<<"The is equal to "<< isEqual <<"\n";
    cout<<"The is isGreaterThan to "<< isGreaterThan <<"\n";
    return 0;
}