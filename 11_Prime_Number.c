#include <stdio.h>

main()
{
	/*
		Q. How to check given number is a Prime number or not..??
		Ans:- The number which is having two factor is called prime number.. It means the number which devides by only '1' and by 'Itself' is called prime number..
		
		==> For making this programme first we need to 'READ' the value which is being input by the user and then " How many factors are present to that number
			we need to check "... For ex:- 5
											Then form '1' to '5' how many factors are there of the given number '5' this we need to check , With itself also..
											
											
											
		::==> Logic of the programe :- If you find any factor, like '1' is a factor of '5' so, then take one 'Count' variable if you find any factor to the variable 
									   'n' just increase the 'Count' vlaue.. After once the process has done then check " If the count value is equals to '2' then
									   the number will be a prime number and if not then, the number will not be a prime number"... If it will be '<' or '>' 2
									   then it will not be a prime number..									
	*/
	
	printf("WELCOME TO THE PROGRAMME TO CHECK PRIME NUMBER \n\n");
	
	int i,n,count=0;
	
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if(n % i==0)
		{
			count++;
		}
	}
	
	if(count==2){
		printf("Prime number \n");
	}else{
		printf("Not Prime \n");
	}
}
