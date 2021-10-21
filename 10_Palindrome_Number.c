#include <stdio.h>

main()
{
	// V.V.I formula to check palendrom number is :-- sum = sum * 10 + r;
	
	printf("WELCOME TO THE PROGRAMME TO CHECK PALENDROME NUMBER \n\n");
	
	int n,r,sum=0,temp;
	
	printf("Enter the value : ");
	scanf("%d", &n);
	temp = n;
	
	while(n>0)
	{
		r = n % 10;
		sum = sum*10+r;
		/* Here i devide 'n' by '10' because reminder operator exibit only one time for the whole 'n' but here the situation is we have to collect each digit of
		   of the given number 'n' so, that we can store to a variable 'sum' & in last we need to compare the value of 'n' to the value of 'sum' which needs to be
		   the equal so, that we can say that it's a palendrome number or not.. That's why we devide 'n' by '10' to continue deviding after the reminder operator
		   stop deviding... 
		   
		   ** Always remember reminder operator devides only once after getting remainder here we need to devide the 'qotient' because now, the 'qotient' has become
		   	  the new value of 'n' so, that it has been nacessary to devide 'n' which is somehow the 'qotient' to get our reminder continue till the value of
		   	  'n' not reaches to '0' ,
		   	  						When it reaches to '0' the condition breaks and the loop will stop 'Itterating' the statements in it..
		 */
		 
		n = n/10;
	}
	
	/*
		Here 'temp' is a variable which has benn taken after the value of 'n' reaches to '0'.. It means when the value of the given reaches at his given criteria
		then the loop will terminates and in this programme we need to compare the value of 'n' with the value of 'sum' and if you see the programme then at this
		position of 'Itteration of loop' now 'n' value becomes '0' so, if you compare '0' to the 'n' value then it will never equal,
		
																and if 'n' value will not equals to the 'sum' value then, how can system compare the both numbers
	    that which one is 'Palendrom' or not.. that's why we took 'temp' as a 'temperary' variable so, that it will store the value of 'n' in itself and when we
		feel need to take back that original number then it returns the original value..															
		
	*/
	
	n = temp;
	if(n==sum)
	{
		printf("Palendrome Number \n");
	}else{
		printf("Not Palendrome \n");
	}
}
