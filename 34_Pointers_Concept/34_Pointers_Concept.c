#include <stdio.h>

int main()
{
	/* 
	Q.  What is pointer ..?
	=>  A Pointer is used to access the information of a particular memory location...
	
	Q.  What is the general decelaration of Pointers...?
	=>  The general declaration of a pointer is :-
		Syntax :-
		
			data-type  Identifier 
			{for ex:- int* a;} here int is a "data-type" and 'a' is a identifier...
			
	==>		It can be written by two types like...int* a(identifier); / int *a(Identifier);
	
	Q.  How many types of pointers..?
	=>  There are only two types of pointers... One is "Typed-Pointer" & Other is "Untyped-Pointer"...
	
		1. Typed Pointer =>	It is used to points to only specific type of data... for ex :- " int* " can only points to the integer data-only..
		" char* " can points to only the character data only... 
		" Double* " can points to only the double data only...
		" float* " can points to only the float data only...
		" struct emp* " can points to only the Employee data only...
		
		2. Untyped Pointer => It can points to any type of data... It is also called "Generic-Pointer"...
		   for ex :- (Void*) is called "Generic Pointer" and it can points to any type of data...
	*/
	int n;
	int* ptr;
	ptr = &n;
	
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	
	printf("Value of n : %d\n", n);
	printf("Address of n : %u\n", &n);
	printf("Value of ptr : %d\n", ptr);
	printf("Address of ptr : %u\n", &ptr);
	printf("Value of n through pointer : %d\n", *(&n));
	
	
	
}
