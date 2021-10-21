#include <stdio.h>

int main()
{
    int arr[10]={10,20,30,40,50,87,77,91,89,97}, i,large,sum=0;
    
    // Q. Write a program to find sum of all the Array Element....??
    
    for(i=0; i<10; i++){
        
        sum = sum + arr[i];
    }
    printf("sum : %d \n", sum);
    
    
    // Q. Write a program for how to find the largest Element in the Array..??
    
    large = arr[0];
    
    for(i=1; i<10; i++){
        sum = 0;
        
        if(arr[i]>large){
            sum = sum + arr[i];
        }
    }
    printf("Largest number of the Array is : %d", sum);
}
