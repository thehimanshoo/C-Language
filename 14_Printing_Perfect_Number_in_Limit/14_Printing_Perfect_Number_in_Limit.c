#include <stdio.h>
#include <conio.h>

main()
{
	int i,n,r,limit,temp,sum=0;
	
	// Here first we need to write the programme for the perfect number..
	// Perfact number is the sum of the factor of that number except itself is equal to the given value..
	
	printf("Welcome to the Program of Perfact number \n\n");
	printf("Enter any number : ");
	scanf("%d", &limit);
		
	for(n=1; n<limit; n++){
		
		temp = n;
		
		for(i=1; i<n; i++){
			r = n % i;
			if(r==0){
				sum = sum + i;
			}
		}
		n=temp;

	if(n==sum){
		printf("Perfact Number \n\n");
	}else{
		printf("not Perfect \n");
	}
	return 0;		
		
};
