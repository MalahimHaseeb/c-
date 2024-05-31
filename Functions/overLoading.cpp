#include<iostream>
using namespace std;
//Function overloading
int sum(int a , int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b ;
}
int sum(int a , int b , int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}
// Execution of main Function
int main(){
    cout<<"The sum of 3 and 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3 ,4  and 6 is: "<<sum(3,4,6)<<endl;
    return 0 ;
}