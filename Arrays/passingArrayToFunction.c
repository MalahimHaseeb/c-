#include<stdio.h>

void PrintArrayReverce(int num[] , int size);

int main(){
    int num[5] = {1,2,3,4,5};
    PrintArrayReverce(num , 5);
    return 0 ;
}

void PrintArrayReverce(int num[] , int size){
  for(int i = size-1 ; i>=0 ; i--){
    printf("%d " , num[i]) ;
  }
};