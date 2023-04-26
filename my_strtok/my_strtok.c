#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);
static int i =0;
int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
	if(token[0]!='\0')
	{
        printf("%s\n", token);
	}
        token = my_strtok(str, delim);
    }

    return 0;
}

char new[20];

char *my_strtok(char str[], const char delim[])
{
    int count,k=0,l=0;
    new[0]='\0';
    while(str[i]!='\0')
    {
	count=0;
	k=0;
	while(delim[k]!='\0')
	{
	    if(str[i]==delim[k])
	    {
		count++;
	    }
	    k++;
	}
	if(count!=0)
	{
	    i++;
	    new[l]='\0';
            return new;	    
	}
	else
	{
	    new[l]=str[i];
	    l++;	    
	}
	i++;
    }
    
    static int last=0;
    if(str[i]=='\0')
    {
	last++;
    }

    if(last<=1)
    {
        new[l]='\0';
        return new;
    }
    else
	return 0;

}
