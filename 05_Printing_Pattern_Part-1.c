#include <stdio.h>
main()
{
		// Q. Print Star '*' Pattern with 5-rows & 5-column using loop :--
		int i,j,y,z;
		printf("First Pattern :-- \n\n");
		
		for(y=1; y <= 5; y++){
			for(z=1; z<=5; z++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
		
		// Q. Print Star pattern from 1'st row to 5'th row and the condition of printing is equals to the value of 'i'..
		printf("Second Pattern :-- \n\n");
		
		for(i=1; i<=5; i++){
			for(j=1; j<=i; j++){
				printf("*");
			}
			printf("\n");
		}	
	
}

