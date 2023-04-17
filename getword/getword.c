#include <stdio.h>

int getword(char str[]);

int main()
{
        int len = 0,i=0;
	char str[100];

	printf("Enter the string : ");
	scanf("%[^\n]", str);

	len = getword(str);
		
		
        printf("You entered ");
        
        while(str[i]!='\0')
        {
	    if(str[i]!=' ')
	    {
            printf("%c",str[i]);
	    i++;
	    }
	    else
		break;
        }
        
        printf(" and the length is %d\n", len);
}

int getword(char str[])
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
	if(str[i]!=' ')
	{
	   count++;
	}
	else
	    break;
	i++;
    }
    return count;
}

