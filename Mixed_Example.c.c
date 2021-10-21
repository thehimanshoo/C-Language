#include <stdio.h>

main()
{
	printf("                             WELCOME TO THE PROGRAMMING WORLD OF RAJPOOT HIMANSHU..\n\n\n");
	
	int i,n, a=0, b=1, c,d,e,r,o,qot,rem, sum=0, temp,fact=1, count=0;
	
	// Q. Write a programme to convert into Fibonacci Series..
	
	printf("\n 1. Welcome to the Programme of Finonacci Series \n\n");
	printf("Enter the limit : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		printf("   %d \n", a);
		c = a+b;
		a = b;
		b = c;
	}
	
	// Q. Write a Programme to Check a given number is Palindrome or not..
	
	printf("\n 2. Welcome to the Programme to check Palendrome Number \n\n");
	printf("Enter any number : ");
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
		printf("Not Palindrome Number \n\n");
	}

	// Q. Write a programme to check given number is perfact or not..
	
	printf("3. Welcome to the programme to check perfect number \n\n");
	printf("Enter a number : ");
	scanf("%d", &n);
	sum = 0;
	
	for(i=1; i<n; i++){
		
		r = n % i;
		if(r==0){
			sum = sum+i;
		}
		
	}
	if(sum==n){
			printf("Perfact number \n\n");
		}
		else{
			printf("Not Perfect \n\n");
		}
	
	// Q. Write a Programme to check given number is Prime or not..
	
	printf("\n 4. Welcome to the Programme to check Prime Number \n\n");
	printf("Enter any number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n % i==0){
			count++;
		}
	}
	
	if(count==2){
		printf("%d is a Prime Number \n\n", n);
	}else{
		printf("%d is not a Prime Number \n\n", n);
	}
	
	
	// Q. Write a programme to find Factorial of any given number...
	
	printf("\n 5. Welcome to the Programme of finding Factorial value...\n\n");
	printf("Enter any number : ");
	scanf("%d", &n);
	
	for(i=n; i>0; i--){
		fact = fact*i;
	}
	printf("%d \n", fact);
	
	// Q. Write a programme to check given number is even or odd..
	
	printf("\n 6. Welcome to the Programme to check Even or Odd..\n\n");
	printf("Enter a number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		r = n % 2;
	}
	
	if(r==0){
			printf("%d is an Even number \n\n", n);
		}else{
			printf("%d is an Odd number \n\n", n);
		}
	
	// Q. Write a programme to add two given number..
	
	printf("\n 7. Welcome to the programme of Addition :- \n\n");
	printf("Enter 1'st number : ");
	scanf("%d", &n);
	
	printf("Enter 2'nd number : ");
	scanf("%d", &o);
	
	sum = n+o;
	printf("Sum of numbers is %d \n\n", sum);
	
	
	// Q. Write a programme for the substraction of two numbers..
	
	printf("\n 8. Welcome to the programme of Substraction :- \n\n");
	printf("Enter 1'st value : ");
	scanf("%d", &n);
	
	printf("Enter 2'nd value : ");
	scanf("%d", &c);
	
	sum = n-c;
	printf("Answer is %d", sum);
	
	
	// Q. Write a programme of Multiplication of two or more than two numbers..
	
	printf("\n\n 9. Welcome to the programme of Multiplication of two or more than two numbers :- \n\n");
	printf("==> Multiplication of two numbers :- \n\n");
	
	printf("Enter 1'st number : ");
	scanf("%d", &n);
	
	printf("Enter 2'nd number : ");
	scanf("%d", &c);
	
	sum = n*c;
	printf("Answer is : %d \n\n", sum);
	
	printf("==> Multiplication of more than two numbers :- \n\n");
	printf("Enter 1'st number : ");
	scanf("%d", &n);
	
	printf("Enter 2'nd number : ");
	scanf("%d", &c);
	
	printf("Enter 3'rd number : ");
	scanf("%d", &d);
	
	printf("Enter 4'th number : ");
	scanf("%d", &e);
	
	sum = n*c*d*e;
	printf("Your final Answer is %d \n\n", sum);
	
	
	// Q. Write a programme for the devision of a given number..
	
	printf("10. Welcome to the programme of division \n\n");
	printf("Enter Divident :         ");
	scanf("%d", &n);
	
	printf("Enter Devisor :          ");
	scanf("%d", &c);
	
	rem = n % c;
	qot = n/c;
	if(n%2==0){
		printf("Number is even having \n ==> qotient %d and \n ==> Remainder %d", qot,rem);
	}else{
		printf("Number is Odd having \n ==> qotient %d and \n ==> remainder %d", qot, rem);
	}
	
	
	
}

