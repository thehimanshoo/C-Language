#include <stdio.h>

main()
{
	/* Here it is a program of counting the string length of the string without using their header file "string.h", here what we do is 
	   first we need to take any 'Char-Array' because string is always written in character form , and assign a value to the array,
	   then after read the "Array" using "gets" function and then ,  make sure that you have to find the length of the string so for
	   length you must need to take a "Variable" having any name and define it be putting the "StringLength" of the array...
	   
	   									Then after these steps you need to repeat a loop untill it reaches to the 'null' character
										the loop will repeat and increase the value of counting with the help of increment of their
										'i' value...  */
	char str[400];
	int len;
	
	printf("Enter the String : ");
	gets(str);
	
	len = StringLength(str);
	printf("Length of '%s' is : '%d' ", str, len);
	
}
	
	int i=0; count=0;
	
	int StringLength(char str[])
	{
		while(str[i] !='\0'){
			count++;
			i++;
		}	
		return count;
	}
