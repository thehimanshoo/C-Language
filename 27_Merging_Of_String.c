#include <stdio.h>
#include <string.h>

main()
{
	char str[200], tdr[200];
	int i, len,len2,temp,len3;
	
	printf("Enter the 1'st String : ");
	gets(str);
	
	printf("Enter the 2'nd String : ");
	gets(tdr);
	
	len = strlen(str);		
	len2 = strlen(tdr);
	
	for(i=0; i<=len2; i++)
	{
		str[len+i] = tdr[i];
	}
	printf("Your New Merze String is : %s", str);
}
