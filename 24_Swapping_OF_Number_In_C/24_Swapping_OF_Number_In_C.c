#include <stdio.h>

main()
{
	int a, b, c,d, temp;
	
	/* Here with the help of external variable 'temp' we are saving our value and run the program of swapping of two number.. 
	   Here what had happened is when i put the value of 'b' into the variable 'a' then the value of a changes to the new value and
	   the previous value which 'a' holds get losse, but here we have to save that value so, that we can print that same value to the
	   other number without loosing the previous one... So, In this case we took a third external variable and first assign that 
	   value to that variable so, that after assigning the new value to 'a' we easily got the previous value... */
	
	printf("Enter the value of 'a' : ");
	scanf("%d", &a);
	
	printf("Enter the value of 'b' : ");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	printf("\n\n Swapped value of 'a' is : %d\n", a);
	printf("Swapped value of 'b' is : %d\n", temp);
	
	// Here in the second example we run the same program but without using the third variable into it.. Let's see how it make...?
	
	printf("Enter the value of 'c' : ");
	scanf("%d", &c);
	
	printf("Enter the value of 'd' : ");
	scanf("%d", &d);
	
	 
}
