#include <stdio.h>
#include <string.h>

main()
{
	char str[200];
	int i;
	
	printf("Enter the String : ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if(str[i]>='A' && str[i]<='Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("Changed value of the String is : %s", str);
	
}
