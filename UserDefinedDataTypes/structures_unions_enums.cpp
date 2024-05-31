#include<iostream>
using namespace std ;

//-----------Structures-------- 1
/*
    In C++, a structure (struct) is a user-defined data type that groups related data items of different data types.
*/

/* First method
*/
struct employee
{
    int eId ;
    char favChar ;
    float salary ;
};

//Second Method
/*
typedef struct employee
{
    int eId ;
    char favChar ;
    float salary ;
} ep;
*/

//----------------Unions--------------------2
/*

A union in C++ is a user-defined data type similar to a structure (struct) that allows you to store different data types in the same memory location. However, unlike a structure, where each member has its own memory space, all members of a union share the same memory space. This means that only one member of the union can hold a value at any given time.
union money {
    int rice;
    char car;
    float pounds;
};
*/


int main() {
    //---structure using--------
    /*
    murtaza.eId = 2 ;
    murtaza.favChar = 'i';
    murtaza.salary = 20000.45f ;
    cout<<murtaza.salary ;
    */
    struct employee murtaza = {2,'M' , 90000000};
    struct employee *ptr = &murtaza ;
    cout<<ptr->eId ;
    /*
    ep murtaza ;
    murtaza.eId = 2 ;
    murtaza.favChar = 'i';
    murtaza.salary = 20000.45f ;
    cout<<murtaza.salary ;
    */
    
    //------------union declration-----------
    /*union money md;
    // m.rice = 21 ; 
    md.rice = 31 ;
    cout<<md.rice ;*/


    //-----------enum----------- 3
    /*
    An enum (short for enumeration) in C++ is a user-defined data type used to assign names to integral constants, making your code more readable and maintainable. Enumerations provide a way to define sets of named constants, also known as enumerators.
    enum Meal{breakFast , Launch , Dinner} ;
    Meal m1 = breakFast ;
    cout<<m1 ;
    cout<<breakFast ;
    */


    //Ending of the program
    return 0 ;
}