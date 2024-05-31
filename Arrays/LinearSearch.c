#include<stdio.h>


int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("The value is fouun on index %d ", i); // Return the index of the found element
            return i;
        }
    }// Return -1 if the element is not found
         printf("No value found "); 
         return -1 ;
}


int main(){
    int nums[3]={3,45,34};
    int key ;
    printf("Enter the number to search: \n");
    scanf("%d",&key);
    linearSearch(nums,3,key);
    return 0;
}
