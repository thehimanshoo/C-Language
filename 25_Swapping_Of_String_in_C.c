#include <stdio.h>

main()
{
	char str[400], temp;
	int i,j;
	
	printf("Enter the String : ");
	gets(str);
	
	i = 0;
	j = strlen(str)-1;
	
	while(str[i] !='\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("Reverse of 'Upper-Case' String is : '%s' \n\n",str);

	while(i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--; 
	}
	printf("Reverse String is : '%s' \n\n", str);
	
	printf("Program of Reverse of Upper-Case \n\n")
	
	while(str[i] !='\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("Reverse of 'Upper-Case' String is : '%s \n\n' ",str);
	
	
	
}
