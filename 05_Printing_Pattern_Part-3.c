#include <stdio.h>

main()
{
	// Using an increment operator to the both loop make a Star '*' pattern which contains 13 stars of total..
	printf("Star Pattern using only increment operator :-- \n\n");
	int i,j;
	for(i=1; i<=13; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Using the same operator print it reverse : --
	printf("Using the same operator it is printed reverse order wise :-- \n\n");
	for(i=1; i<=13; i++){
		for(j=i; j<=13; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Using decrement operator how to print the same pattern , here is the example how to print the same pattern using decrement operator..
	for(i=13; i>=1; i--){
		for(j=i; j>=1; j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Using decrement operator how to print the same pattern , here is the example how to print the same pattern using decrement operator..
	for(i=13; i>=1; i--){
		for(j=i; j<=13; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	
}
