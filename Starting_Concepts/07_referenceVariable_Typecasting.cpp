// #include<iostream>
// using namespace std;
// #include<iomanip>

// int c = 90 ; // Global variable 

// int main(){
//     /*int a,b,c;
//     cout<<"Enter the value of a\n";
//     cin>>a;
//     cout<<"Enter the value of b\n";
//     cin>>b;
//     c = a+b ;
//     cout<<"The sum of a and b is " <<c ;
//     cout<<"The global variable is " <<::c ; // (::) Scope resolution operator
//     */

//     // ----------Reference Variable------------
//     /*int x = 10 ;
//     int & y = x ;
//     cout<<x ;
//     cout<< y;*/

//     //------------Typecasting------------ (convert dataType into another)
//     float a = 45.5 ;
//     cout<<"Will return integer "<<setw(4)<<(int)a<<endl;
//     cout<<"Will return integer "<<int(a)<<endl;
//     cout<<"Will return integer "<<a;
//     return 0 ;
// }

#include <iostream>
using namespace std;

int main() {
    int age = 25;
    int income = 30000;

    // Encode conditions into an integer
    int category = 0;
    if (age < 18) {
        category = 1;  // Category for minors
    } else if (age >= 18 && age <= 65) {
        if (income < 20000) {
            category = 2;  // Category for low-income adults
        } else if (income >= 20000 && income < 50000) {
            category = 3;  // Category for middle-income adults
        } else {
            category = 4;  // Category for high-income adults
        }
    } else {
        category = 5;  // Category for seniors
    }

    // Use switch statement on the pre-processed category
    switch (category) {
        case 1:
            cout << "Category: Minor" << endl;
            break;
        case 2:
            cout << "Category: Low-income adult" << endl;
            break;
        case 3:
            cout << "Category: Middle-income adult" << endl;
            break;
        case 4:
            cout << "Category: High-income adult" << endl;
            break;
        case 5:
            cout << "Category: Senior" << endl;
            break;
        default:
            cout << "Invalid category" << endl;
    }

    return 0;
}
