#include <stdio.h>

main ()
{
	// Q. Write a program to insert one array into another :--
	
	int i,arr[50],n,new,loc,temp;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	printf("Enter %d element : ", n);
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	// Reading of the main array completed upto here.... Now inserting process begins :--
	
	printf("Enter the new element to be inserted : ");
	scanf("%d", &new);
	printf("Enter the location on which you want to insert : ");
	scanf("%d", &loc);
	
	
	if(loc=1){
		for(i=n;i>=0;i--){
			arr[i+1]=arr[i];
		}
		arr[0]=new;
	}
	for(i=0; i<n+1; i++){	`
		printf("%d ", arr[i]);
	}

}
