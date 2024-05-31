#include<stdio.h>

int main(){
    int matrix[2][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int row=0 ; row<3 ; row++){
        for(int colomn=0; colomn<3 ; colomn++){
            printf("%d ",matrix[row][colomn]);
        }
        printf("\n");
    }
    return 0 ;
}