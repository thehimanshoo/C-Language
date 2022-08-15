#include <stdio.h>

main()
{
	int i,n,r,temp,sum=0, a=0, b=1, c;
	
	// Q. Write a Programme to check given number is fibonacci series or not..
	
	printf("Welcome to the programme of Fibonacci Series \n\n");
	
	printf("Enter a limit : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		printf("%d \n", a);
		c = a+b;
		a = b;
		b = c;
	}
	printf("\n\n");
	
	// Q. Write a Programme to check given number is Palindrome number or not..
	
	printf("Welcome to the programme of Palindrome Series \n\n");
	
	printf("Enter a number : ");
	scanf("%d", &n);
	temp = n;
	
	while(n>0){
		
		r = n % 10;
		sum = sum*10+r;
		n = n/10;
	}
	
	n = temp;
	if(n==sum){
		printf("Palindrome Number \n\n");
	}else{
		printf("Not Palindrome \n\n");
	}
	
	// Q. Write a programme to check even or odd..
	
	printf("Welcome to the programme of Even or Odd \n\n");
	
	printf("Enter any number : ");
	scanf("%d", &n);
	
	if(n % 2==0){
		printf("Even Number \n\n");
	}else{
		printf("Odd Number \n\n");
	}
	
	
	// Q. Write a programme to check given number is prime or not..
	
	sum = 0;
	printf("Welcome to the programme to check Prime Number \n\n");
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		if(n % i==0){
			sum++;
		}
	}
	
	if(sum==2){
		printf("%d is a Prime Number \n\n", n);
	}else{
		printf("%d is not Prime \n\n", n);
	}
	
	// Q. 
	
}








