#include<stdio.h>


int BinarySearch(int arr[], int size, int key) {
    int left = 0 ;
    int right = size -1 ;
    while (left <= right)
    {
        int mid = left + (right - left)/2 ;
        if(arr[mid]==key){
            return mid ;
        }
        if(arr[mid]<key){
            left = mid + 1 ;
        }else{
            right = mid - 1;
        }
    };
    return -1 ;
    
}


int main(){
    int nums[3]={3,45,34};
    int key ;
    printf("Enter the number to search: \n");
    scanf("%d",&key);
    int result =  BinarySearch(nums , 3 ,key);
    if (result != -1) {
        printf("The value is found at index %d\n", result);
    } else {
        printf("No value found\n");
    }
    return 0;
}
