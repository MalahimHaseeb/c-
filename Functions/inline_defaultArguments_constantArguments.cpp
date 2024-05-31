#include<iostream>
using namespace std ;

inline int product(int a , int b) {
    int c = a*b;
    return c ;
}//will save time but will take more memory

int product(int a , int b = 3) { // Default arguments
    int c = a*b;
    return c ;
}

int main(){
    int a , b ;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b);
    return 0;
}