#include <stdio.h>

main()
{
		int n,res;
	
	/* Q. What is Recursion...??
	  ==> Function calling itself is called Recursive Function.. Simply calling a function from the 
	  	  definition of a same function is called Recursion... */
	  	  
	  	  printf("Enter 'n' value : ");
	  	  scanf("%d", &n);
	  	  
	  	  res = fact(n);
	  	  printf("result : %d", res);
	  	  
	  	  int fact(int n){
	  	  		int res;
	  	  		if(n==0){
	  	  				r =1;
					}else{
						res = n*fact(n-1);
					}
					return res;
			}
	  	  
}
