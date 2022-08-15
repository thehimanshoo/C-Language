#include <stdio.h>

main()
{
	// Write a program for the end user which add the number starting from 1 to number they have written..
	
	int n,i,sum=0;
	printf("It is a program of adding of number starting from 1 to number they have written with the help of 'INCREMENT' operator\n\n");
	
	printf("Enter 'n' value : ");
	scanf("%d", &n);
	
	for(i=1; i <= n; i++){
		sum = sum + i;
	}
	
	printf("Sum of numbers is : %d\n", sum);
	
}


