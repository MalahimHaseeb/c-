#include<iostream>
using namespace std ;

int sum(int a , int b){
    int c = a + b ;
}

/*void swap(int a , int b){
    int temp = a ;
    a = b ;
    b = temp ;
}*/

//CallByReference Using Pointers
void swap(int* a , int* b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

//CallByReference Using c++ reference Variables
void swapReferenceVar(int &a , int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}

int main(){
int a = 4 ,b =  5 ;
cout<<"The sum of 4 and 5 is " <<sum(4,5)<<endl ;
// swap(a,b) ; This will not swap
/*
swap(&a,&b) ; 
cout<<"The swapping of a is  "<<a << " The value of b is "<<b<<endl ;
*/
swapReferenceVar(a , b) ;
//Swapping using reference variables
cout<<"The swapping of a is  "<<a << " The value of b is "<<b<<endl ;
return 0 ;
}