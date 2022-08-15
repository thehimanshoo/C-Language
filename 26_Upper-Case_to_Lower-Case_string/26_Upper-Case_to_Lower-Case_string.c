#include <stdio.h>
#include <string.h>

main()
{
	char str[200];
	int i;
	
	printf("Enter the 'Upper-Case' String : ");
	gets(str);
	
	i = 0;
	
	while(str[i] !='\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("Reverse of 'Upper-Case' String is : '%s' ",str);
}
