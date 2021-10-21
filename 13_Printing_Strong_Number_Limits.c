#include<stdio.h>

int main(){
    int limit,i,n,r,temp,fact,sum=0;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    for(n=1;n<=limit;n++){
       temp=n;
       
    /* Here we will have to store the value of 'n' to the variable 'temp' because next we are processing
	   the while loop for mainly remainder operator and the condition will be (n>0) it means the loop
	   will continue dividing the number till the 'n' value becomes '0' and when it becomes '0' the control
	   comes out from the loop and it stop itterating... When the itteration will complete finally 'n' value
	   becomes '0' which has no use for the comparision purpose that's why we are using 'temp' to store the 
	   value of 'n' which we can retrieve it once again for the comparision purposes...*/
		  
       sum=0;
       while(n>0){
        r = n % 10;
        fact = 1;
        for(i=1;i<=r;i++){
            fact = fact * i; 
        }
        sum = sum + fact;
        n = n / 10;
      }

      n=temp;
      
      /* Here Retrieving the value of 'n' form 'temp' because after the ending of the while loop here the
	  	 value of 'n' now becomes '0' because we have already given the condition to repeat the loop till
		'n' value is greater than > '0' so that the loop will repeat till the value on 'n' becomes '0' and
		when it becomes '0' the loop will terminate and the controls comes out of the loop..
		
											After coming the control out form the loop then next it goes
	    for comparision and for the condition checking but here condition is checking for which number? not
	    initialized value of 'n' but the deduced value of 'n' means '0' which is not favourable for the
	    condition to check..
	    
	    					That's why here we have Retrieved the value of 'n' from the variable 'temp' so,
	    that it checks the condition for the initiliased value of 'n' and then when, gives the control to 
	    main loop will agin initialised with the previous value so that 'n++' will work...
	    
	    Otherwise if we dont Retrieve the value of 'n' from 'temp' then the loop will revolving around
	    '0' and '1' and it will go infinite because it will never reach to the limit and if it will not reaches
		then the loop will go on repeating and always print the same Result infinite... */
    
      if(sum == temp){
            printf("\n %d strong number \n",temp);
      }
      
    }
   
}
