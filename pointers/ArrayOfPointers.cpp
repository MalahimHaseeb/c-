#include<iostream>
using namespace std ;

class Shop{
  int id;
  float price ;
  public :
    void setData(int a , int b){
        id = a;
        price  = b;
    }
    void displayData(){
        cout<<"The id is: "<<id<<endl;
        cout<<"The price is: "<<price<<endl;
    }
};

int main(){
 Shop *ptr = new Shop[2] ;
}