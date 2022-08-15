#include <stdio.h>
#include <string.h>

main()
{
	char str[300];
	int len;
	
	printf("Enter the String : ");
	gets(str);
	len = strlen(str);
	printf("Length : '%d' \n", len);
}
