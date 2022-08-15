#include <stdio.h>

main()
{
	// first program :--
	printf("WELCOME TO THE FIRST PROGRAME 'ADDITION'..\n\n");
	
	int a,b,sum,c,d,sub,e,f,mul,g,h,qot,rem,j,square,val,i,n,result,sums=0;
	printf("Enter the 1'st value : ");
	scanf("%d", &a);
	
	printf("Enter the 2'nd value : ");
	scanf("%d", &b);
	
	sum = a + b;
	printf("Sum of number you've enter is : %d\n", sum);
	
	if(sum % 2==0){
		printf("It's an Even input\n\n");
	}else{
		printf("It's an Odd input\n\n");
	}
	
	// Second program :--
	printf("WELCOME TO THE SECOND PROGRAME 'Substraction'..\n\n");
	
	printf("Enter the 1'st value to Substract : ");
	scanf("%d", &c);
	
	printf("Enter the 2'nd value to Substract : ");
	scanf("%d", &d);
	
	sub = c - d;
	printf("Substracted value : %d\n", sub);
	if(sub % 2==0){
		printf("Even Input\n\n");
	}else{
		printf("Odd Input\n\n");
	}
	
	// Third programe :--
	printf("WELCOME TO THE THIRD PROGRAME 'Multiplication'..\n\n");
	
	printf("Enter the 1'st value to Multiply : ");
	scanf("%d", &e);
	
	printf("Enter the 2'nd value to Multiply : ");
	scanf("%d", &f);
	
	mul = e * f;
	printf("Multiplied value : %d\n", mul);
	if(mul % 2==0){
		printf("Even Input\n\n");
	}else{
		printf("Odd Input\n\n");
	}
	
	// Fourth programe :--
	printf("WELCOME TO THE FOURTH PROGRAME 'Division'..\n\n");
	
	printf("Enter the 1'st value : ");
	scanf("%d", &g);
	
	printf("Enter the 2'nd value : ");
	scanf("%d", &h);
	
	qot = g / h;
	printf("Qotient : %d\n", qot);
	
	rem = g % h;
	printf("Remainder : %d\n", rem);
	
	if(rem==0){
		printf("Even Input\n\n");
	}else{
		printf("Odd Input\n\n");
	}
	
	// Fifth programe :-
	printf("WELCOME TO THE FIFTH PROGRAME 'Square root'..\n\n");
	
	printf("Enter the 1'st value : ");
	scanf("%d", &j);
	
	square = j * j;
	val = square % 2;
	printf("Square root is : %d\n", square);
	if(val==0){
		printf("Square result Even \n\n");
	}else{
		printf("Square result Odd \n\n");
	}
	
	// Loop Example Practice Problem :--
	
	// Write a programe to check the perfect number which is entered by 'End-User'..
	
	printf("WELCOME TO THE PROGRAME OF LOOP\n\n");
	
	printf("Enter 'n' value : ");
	scanf("%d", &n);
	
	result = n % 2;
	for(i=1; i < n; i++){
		if(n % i==0){
			sums = sums + i;
		}
	}
	
	if(n==sums){
		printf("It's a perfact number \n\n");
	}else{
		printf("It's not a perfact number \n\n");
	}
}
