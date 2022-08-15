#include <stdio.h>

main()
{
	// Q. What is Nested-if-block...??
	//==> Defining if-block under a if-block is called Nested-if-block.. or defining if and else-block too in if-block is also known as Nested-block.. for ex:-
	
	int n1,n2;
	
	printf("Enter the first number : ");
	scanf("%d", &n1);
	
	printf("Enter the second number : ");
	scanf("%d", &n2);
	
	if(n1 != n2){
		
		printf("%d is equal to %d \n", n1,n2);
		
		if(n1 > n2){
			printf("%d is grater than %d \n", n1,n2);
		}else{
			printf("%d is less %d \n", n2,n1);
		}
		
	}else{
		printf("%d is not equal to %d", n1,n2);
	}

}
