#include <stdio.h>

int main()
{
	int i,j,k,l,m,n,c=80;
	
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	printf("\n");
	
	for(i=1; i<=n; i++){
		
		for(j=1; j <= c/2-i; j++){
		printf(" ");		
	}
	
	for(k=1; k <= 2*i-1; k++){
		printf("*");
	}printf("\n");
	
	}printf("\n");	
	return 1;
}
