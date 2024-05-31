#include<iostream>
using namespace std ;
int main() {
   //-----------What is pointer---------(dataTypes) which holds the address of other dataTypes
   int a = 3 ;
   int* b = &a ;
   //&---> (Address of) operator  
   cout << "The address of a is " << &a <<endl ;
   cout << "The address of a is " <<  b  <<endl ;
  
   //*---> Deferecing of operator  (check the value of addressing variable)
   cout << "The value at address b is " <<  *b  <<endl ; //will print 3 because value of addressing variable a is 3


   //-------Pointer to pointer variable------------
   int **c = &b;
   cout<<*c;
   cout<<**c;
}