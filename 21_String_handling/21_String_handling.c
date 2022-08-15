#include <stdio.h>

main()
{
	char name[40];
	/* In this example of string handling we use to read the statements through 'scanf-function' but in this function
	   we can read the only one word untill it ends and reaches to the ('\o'-null) character.. when the words end then
	   generally what we do is we give the space between one words to another words so that we can read and understand
	   but in (string-handling) when we give the space then that given space will be counted as ('\o'-null) Character
	   and when the (Spacifier) like for string we use "%s-specifier" and for integer we use "%d-specifier" so, in 
	   string handling when the "specifier" reaches to the end of the word and then go next to the space which is
	   already being counted as a ('\o'-null) Character the reading (Omites) the reading and and it excluded... 
	   like if we need to read the more words to read the line through (scanf) function then as many words we want to
	   read those many times (specifier) we need to write "%s"... */
	
//	printf("                       Welcome to the programme of String-handling \n\n");
//	printf("Enter the name : ");
//	scanf("%s", name);
//	printf("Your name is : %s\n\n", name);
//	
	
	/* In this example of string handling we use (gets) function to read all the statements or words you provides
	   in this what it will do is :-- It will read all the sentences, spaces, symbols, and everything untill you press
	   enter key.. It means it will noly stop reading when you press enter key except for the last null character..*/
	   
	   printf("              Welcome to the String handling using gets-function \n\n");
	   printf("Enter your name here : ");
	   gets(name);
	   printf("Your name is : %s", name);
}
