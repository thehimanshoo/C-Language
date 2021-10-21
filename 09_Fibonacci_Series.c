#include <stdio.h>

main ()
{
	int n,i,a=0,b=1,c;
	
	printf("Welcome to the programme of Fibonacci series : \n\n");
	
	printf("Enter the limits : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		
		// Here what we need to do is only we have to print the value of 'a'...
		// Here what we need to do again is :-- we just only need to add the value of 'a' and 'b' and then put that value into 'c'...
		
		printf("%d \n", a);
		
		c = a+b;
		a = b;
		b = c;
	}
}
