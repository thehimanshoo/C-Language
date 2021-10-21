#include <stdio.h>

int main()
{
	int i,n,fact=1;
	
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	
	fact = 1;
	for(i=n; i>=1; i--)
	{
		fact= fact*i;
	}

}
