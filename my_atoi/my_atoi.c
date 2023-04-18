#include <stdio.h>

int my_atoi(const char []);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi(const char str[])
{
    int i=0,num=0;
    if(str[0]=='-')
    { 
	i=1;
    	while(str[i]!='\0')
    	{
	    if(str[i]>=48&&str[i]<=57)
	    {
		num=num*10+(str[i]-48);
	    }
	    else
		break;
	    i++;
    	}
	num=num*(-1);
    }
    else if(str[0]=='+')
    {
	i=1;
    	while(str[i]!='\0')
    	{
	    if(str[i]>=48&&str[i]<=57)
	    {
		num=num*10+(str[i]-48);
	    }
	    else
		break;
	    i++;
	}
    }
    else if(str[0]>=48&&str[0]<=57)
    {
	while(str[i]!='\0')
	{
	    if(str[i]>=48&&str[i]<=57)
	    {
		num=num*10+(str[i]-48);
	    }
	    else
		break;
	    i++;
    	}

    }

return num;

}
