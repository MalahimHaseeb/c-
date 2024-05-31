#include<iostream>
using namespace std ;

int main(){
    //-----------Ques_4---------
    /*bool p = true , q = true ;
    p= !p || q;
    p = p&& q || !p&&!q;
    q = (p||q) && !(p&&q) ;
    cout<<p<<"\t"<<q;*/

     //-----------Ques_5---------
     for(int i = 0  ; i<7 ; i++){
        if(i%2==0){
            cout<<i+1<<"\t";
        }else if (i%3==0) {
           cout<<i*i<<"\t";
        }else if (i%5==0) {
           cout<<2*i-1<<"\t";
        }else{
          cout<<i<<"\t";
        }
     }
}