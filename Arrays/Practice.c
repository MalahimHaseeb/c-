#include<stdio.h>

int main(){
    float numbs[5]={2.0 , 3.1 , 3.3 ,4.5 , 4.4};
    float sum =0.0;

    for(int i=0 ; i < 5 ; i++) {
     sum += numbs[i] ;
    }
    float average = sum/5;
    printf("The average is %.2f\n" , average) ;
}