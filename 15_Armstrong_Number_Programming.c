#include <stdio.h>

main()
{
    int i,n,r,c,temp,sum=0;
    
   /* Q. What is ArmStrong Number...??
	 =>  Armstrong number is nothing but the sum of cube of the each individual of the given number is equal
	     to the 'n' value which is given is known as Armstrong Number... for ex:- 153 is Armstrong no.*/
	
    
    printf("Enter the n value : ");
    scanf("%d", &n);
    temp = n;
    
    while(n>0){
        
        r = n % 10;
        c = r*r*r;
        sum = sum + c;
        n = n/10;
        // printf("r value : %d \n", r);
        // printf("c value : %d \n", c);
        // printf("sum value : %d \n", sum);
        // printf("n value : %d \n", n);
    }
    n = temp;
    if(n==sum){
        printf("%d is Amastrong number \n\n", n);
    }else{
        printf("%d is not Amastrong number \n\n", n);
    }
    
}

