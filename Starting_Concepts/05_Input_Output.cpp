// #include<iostream>
// using namespace std ;

// int main(){
//     int num1;
//     // << is called insertion operator 
//     cout<<"Enter the value of num1:\n" ;
//     // >> is called Extraction operator
//     cin>>num1; 

//     cout<< "You entered the "<<num1 ;
//     return 0;
// }

#include <iostream>
#include <iomanip>

int main() {
    int num = 42;
    double pi = 3.14159;

    std::cout << "Number: " << std::setw(5) << num << std::endl;
    std::cout << "Pi: " << std::setprecision(4) << pi << std::endl;
    std::cout << "Pi: " << std::fixed << std::setprecision(2) << pi << std::endl;

    return 0;
}
