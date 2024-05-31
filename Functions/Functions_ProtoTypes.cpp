#include<iostream>
using namespace std ;

/*int sum (int a , int b) {  //Parameters
  int c = a + b;
  return c ;
}*/

int sum(int a , int b); //Function-ProtoTyping

int main() {
    //---------Functions--------- 1
    /*
    A function is a block of code that performs some operation. A function can optionally define input parameters that enable callers to pass arguments into the function. A function can optionally return a value as output
    int num1 , num2 ;
    cout<< "Enter the number 1: ";
    cin>>num1;
    cout<< "Enter the number 2: ";
    cin>>num2;
    cout<<"The sum is: "<<sum(num1 , num2) ; //Arguments
    */

    //----------Function ProtoTyping--------- 2
    /*
    A function prototype in C++ specifies the data types of the function's parameters and return values. This helps the compiler perform type-checking when you call the function, ensuring that you provide the correct arguments and handle the return value appropriately.

    type function_name (parameters);
    */
    int num1 , num2 ;
    cout<< "Enter the number 1: ";
    cin>>num1;
    cout<< "Enter the number 2: ";
    cin>>num2;
    cout<<"The sum is: "<<sum(num1 , num2) ; //Arguments
    return 0 ;
}

int sum (int a , int b) {  //Parameters
  int c = a + b;
  return c ;
}