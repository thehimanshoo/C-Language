#include <stdio.h>

main()
{
	// Write a program for the end user which add the number starting from 1 to number they have written..
	
	int n,i,sum=0;
	printf("Enter 'n' value : ");
	scanf("%d", &n);
	
	for(i=1; i <= n; i++){
		sum = sum + i;
	}
	
	printf("Sum of %d numbers is : %d\n", &n,sum);
	
}


