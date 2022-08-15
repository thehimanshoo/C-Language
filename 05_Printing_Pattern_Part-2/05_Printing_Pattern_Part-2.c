#include <stdio.h>

main()
{
	// Q. print Star pattern form first to fifth row but in decrement order :--
	int i,j;
	printf("Example of decrement order printing pattern :-- \n\n");
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Q. Print number pattern form first row to fifth of the row in decreasing order :--
	
	printf("Example of decreasing order printing number pattern :-- \n\n");
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			printf("%d", i);
		}
		printf("\n");
	}printf("\n");
	
	// Q. Print number pattern form first row to fifth row & in each row start decreasing form it top most count :--
	
	printf("Example of decreasing order printing number part-2 :-- \n\n");
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	
	// Part-3 :--
	
	printf("Example of increasing order printing pattern part-3 :-- \n\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
	
	
	// Part-4 :--
	
	printf("Example of increasing order printing pattern part-4 :-- \n\n");
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	
	// Suppose in the outer loop we are using 'increment' operator and in the inner loop we are using 'decrement' operator then what will be the result..
	
	// Part-5 :--
	
	printf("In the Outer Loop we're using 'increment' operator and In the Inner Loop we're using 'decrement' operator part-5 :-- \n\n");
	printf("Printing 'i' value :- \n\n");
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
	
	// Part-6 :--
	
	printf("Now printing 'j' value :- \n\n");
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	
	// Suppose in the outer loop we are using 'increment' operator and in the inner loop we are using 'decrement' operator then what will be the result..
	
	// Part-7 :--
	
	printf("In the Outer Loop we're using 'decrement' operator and In the Inner Loop we're using 'increment' operator part-6 :-- \n\n");
	printf("Printing 'i' value :- \n\n");
	for(i=5; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
	
	// Part-8 :--
	
	printf("Now printing 'j' value :- \n\n");
	for(i=5; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	
}
