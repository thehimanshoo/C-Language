#include <stdio.h>

int main()
{
	/*
		Q. What is Strong Number...??
	 Ans:- The sum of Factorials of individual digits of the same numbers is equals to the total
	 	   total value you entered.. for ex :- 145
									1! = 1
									4! = 1*2*3*4 = 24
									5! = 1*2*3*4*5 = 120
			so, the sum of individual factorial of the given number is :- 1+24+120 = 145, which is
			equals to the same number 145.. so, 145 is a strong number..						
	*/
	
	int i,n,r,fact,temp,sum=0;
	
	printf("Welcome to the Programme of Checking Strong Number \n\n");
	printf("Enter any number : ");
	scanf("%d", &n);
	temp = n;
	
	for(i=1; i<=n; i++){
		
		r = n %10;
		fact = 1;
		for(i=r; i>0; i--){
			fact = fact*i;
		}
		n = n/10;
		sum = sum + fact;
	}
	n = temp;
	if(n==sum){
		printf("Strong number\n\n");
	}else{
		printf("Not Strong\n\n");
	}
	
}
