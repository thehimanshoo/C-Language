#include <stdio.h>

int main(){

//	printf("Enter the value of 'n' : ");
//	scanf("%d", &n);
//	
//	for(i=1; i<=n; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	
//	// Same Program but printing of Stars '*' will be in desending order :--
//	
//	printf("Programe-2, Same program but here printing of srars will be in inverse mode :-- \n\n");
//	printf("Enter the value of 'n' : ");
//	scanf("%d", &n);
//	printf("\n");
//	
//	for(i=n; i>=1; i--)
//	{
//		for(j=i; j>=1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	
//	
//	// Third progaram of same base but printing pattern will be different :--
//	
//	printf("Enter the value of 'n' : ");
//	scanf("%d", &n);
//	printf("\n");
//	
//	for(i=1; i<n; i++)
//	{
//		for(j=i; j<n; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}printf("\n");
	
	// Third and second last program :--
	int i,j,k,l,m,n;
	printf("This is the second last program :-- \n\n");
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	printf("\n");
	
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf("*");
		}
		
		for(k=n; k>i; k--)
		{
			printf(" ");
		}
		for(l=i; l<=n; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Fourth and final program :--
	
	printf("Fourth and final program : \n\n");
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("The value of variable 'i' is : ");
			printf("i \n");
		}
		
		for(k=1; k<=i; k++)
		{
			printf("\n");
			printf("The value of variable 'j' is : ");
			printf("j \n ");
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 1;
	}
