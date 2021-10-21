#include <stdio.h>

int main()
{
    int a,b,sum,rep,c,qot,rem,d,e,res,com,n,cot,prog;
    
    printf("Welcome To My First Pragram\n\n");
    printf("Enter the 1'st value : ");
    scanf("%d", &a);
    
    printf("Enter the 2'nd value : ");
    scanf("%d", &b);
    
    sum = a+b;
    rep = sum % 2;
    printf("Sum of value you enter is : %d\n", sum);
    if(rep==0){
        printf("You entered an Even input\n\n");
    }else{
        printf("You entered an Odd input\n\n");
    }
    
    // Second Program Starts form here :--
    
    printf("Welcome !! You've Successfully entered in my second Program of Division\n\n");
    printf("Enter the 1'st value : ");
    scanf("%d", &c);
    
    qot = c/2;
    rem = c % 2;
    
    printf("qotient : %d\n", qot);
    printf("Remainder : %d\n", rem);
    if(rem==0){
        printf("It's an even input\n\n");
    }else{
        printf("It's an odd input\n\n");
    }
    
    // Third program starts form here :--
    
    printf("Welcome to the world of multiplication\n\n");
    printf("Enter your 1'st input : ");
    scanf("%d", &d);
    
    printf("Enter your 2'nd input : ");
    scanf("%d", &e);
    
    res = d * e;
    com = res % 2;
    printf("Your expected answer'll be : %d\n", res);
    if(com==0){
        printf("You got an even result \n\n");
    }else{
        printf("You got an Odd result \n\n");
    }


	// Q. Write a program to check a given number is even or odd..?
	
	printf("Welcome to the final programme \n\n");
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	cot = n/2;
	prog= n % 2;
	
	cot = n/2;
	prog = n % 2;
	
	if(n % 2 == 0){
		printf("%d is even.. \n\n", n);
	}else{
		printf("%d is odd.. \n\n", n);
	}
	
	printf("having qotient : %d \n and remainder %d \n", cot, prog);   
}










