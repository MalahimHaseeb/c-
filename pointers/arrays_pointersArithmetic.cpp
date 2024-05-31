#include<iostream>
using namespace std ;
int main(){

//---------Declaring the array------------ 2 
/*
//---First method-----
int marks[4] = {2, 3, 4, 5} ;
cout<<marks[3];
*/

/*
//---second method-----
int marks[4] ;
marks[3] = 9 ;
cout<<marks[3];
*/

//Print Array Through loops
/*
int h[3] = {2, 3 , 5} ;
for (int i = 0; i < 3 ; i++)
{
    cout<<h[i]<<endl ;
}
//Quiz: Use the same work using do while loop
*/


//-------------Pointers Arithmetic (Arrays)------------ 3
/*
In arrays we dont use the (&) symbol
Formula : addressNew = addressCurrent + i*sizeOf(dataType) 
*/
int mar[4] = { 3 ,2 ,5 , 7} ;
int *p = mar ;
cout<< "The value of mar[0] is "<<*p<<endl;
cout<< "The value of mar[1] is "<<*(p+1)<<endl;
cout<< "The value of mar[2] is "<<*(p+2)<<endl;
cout<< "The value of mar[3] is "<<*(p+3)<<endl;


// Ending the program
return 0 ;
}

//--------------Arrays----------------- 1 
/*
An array is the collection of similar type stored in contigous memory location.
SomeTimes , a simple variable is not enough to hold all data.
For example , lets say we want to store the marks of 2500 students , having different 2500 variables for this task is not feasible.
To solve this problem , we can define an array with size 2500 that can hold the marks of all students.
*/