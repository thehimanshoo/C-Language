#include <stdio.h>

main()
{
    int a, b;
    
    printf("WELCOME TO THE WORLD OF SWAPPING PROGRAM\n\n");
    
    printf("Enter the value of 'a' : ");
    scanf("%d", &a);
    
    printf("Enter the value of 'b' : ");
    scanf("%d", &b);
    
    printf("\n Before swap your value is : %d %d \n", a,b);
    
    swap(a, b);
}

swap(x,y)
{
    int temp;
    
    temp = x;
    x = y;
    y = temp;
    
    printf("After swap your value is : %d %d \n", x,y);
}










