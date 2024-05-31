#include <iostream>
using namespace std ;
int main() {
    /*int n1 = 0, n2 = 1, nextTerm;

    std::cout << "First 10 Fibonacci numbers: ";
    for (int i = 1; i <= 10; i++) {
        std::cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    std::cout << std::endl;
    return 0;*/

    int n , ch = 0;
    cout<<"Enter the number to check whether it is prime or not: " ;
    cin >> n ;

    for(int i = 1 ; i<=n ; i ++) {
        if (n%i == 0) {
            ch++ ;
        }
    }

    if(ch==2){
        cout<<"You entered prime number"<<endl;
    }else {
        cout<<"You dont entered prime number"<<endl;
    }
}
