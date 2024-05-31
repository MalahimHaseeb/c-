#include<iostream>
using namespace std ;

int facturial(int n){
    if(n<=1){  // base condition
        return 1 ;
    }

    return n* facturial(n-1);  // Recursion
} 
int main(){
    cout<<"The faturial of 6 is "<<facturial(6);
    return 0 ;
}