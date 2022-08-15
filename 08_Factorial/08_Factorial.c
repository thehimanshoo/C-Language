#include <stdio.h>

main()
{
	long int i,n,m,fact,j,k,mul,r,sum=0,res,qot,rem;
//	printf("WELCOME TO THE FIRST PROGRAMME TO FIND FACTORIAL \n\n");
//	
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	
//	fact = 1;
//	for(i=1; i<=n; i++){
//		fact = fact*i;
//	}
//	printf("%d \n\n", fact);
//	
//	// Second programme for multiplication :
//	
//	printf("WELCOME TO THE SECOND PROGRAMME OF MULTIPLICATION \n\n");
//	
//	printf("Enter a number : ");
//	scanf("%d", &j);
//	
//	printf("Enter the second number : ");
//	scanf("%d", &k);
//	
//	mul = j*k;
//	printf("%d \n\n", mul);
//	
//	// Third programme to find perfect number
//	
//	printf("WELCOME TO THE THIRD PROGRAMME TO FIND PERFECT NUMBER \n\n");
//	
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	
//	for(i=1; i<n; i++){
//		if(n % i ==0){
//			sum= sum+i;
//		}
//	}
//	if(n==sum){
//		printf("Perfect number \n\n");
//	}else{
//		printf("Not Perfect number \n\n");
//	}
//	
//	
//	// Write a programme to check given number is even or odd..
//	
//	printf("WELCOME TO THE FOURTH PROGRAMME TO CHECK EVEN OR ODD \n\n");
//	
//	printf("Enter a number : ");
//	scanf("%d", &n);
//	
//	r = n % 2;
//	
//	if(r==0){
//		printf("Even input \n\n");
//	}else{
//		printf("Odd input \n\n");
//	}
	
	
	// Write a programme of division of given two number 
	
	printf("WELCOME TO MY LAST PROGRAMME OF DIVISION OF GIVEN TWO NUMBERS \n\n");
	
	printf("Enter the number : ");
	scanf("%d", &m);
	
	printf("Devided by : ");
	scanf("%d", &n);
	
	qot = m/n;
	printf("qotient of the given number is : %d \n", qot);
	
	rem = m % n;
	printf("remainder of the given number is %d \n", rem);
	
	if(rem==0){
		printf("%d is the factor of %d \n", n,m);
	}else{
		printf("%d is not factor of %d \n", n,m);
	}
	
	}
