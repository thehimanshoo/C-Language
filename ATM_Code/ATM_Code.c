#include <stdio.h>

main()
{
    int a[8]={500,100,50,20,10,5,2,1},amount,temp,i;
    
    printf("Enter the amount : ");
    scanf("%d", &amount);
    
    temp = amount;
    for(i=0; i<8; i++){
    	printf("Number of %d Rupee note is : %d \n", a[i],temp/a[i]);
    	temp = temp % a[i];
	}
}
