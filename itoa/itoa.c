#include <stdio.h>

char itoa(int num, char str[]);

int main()
{
    int num=0;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    *str=itoa(num, str);
    
    printf("Integer to string is %s\n", str);
}

char itoa(int num, char str[])
{
    int i=0;
    char str1[10];
    if(num<0)       
    {
	str1[0]='-';
	i=1;
	num=num*(-1);
	while(num!=0)    
    	{	    
	  str1[i]=48+(num%10);
	  num=num/10;
	  i++;
    	}
	str1[i]='\0';
    }
    else if(num>0)
    {
	i=0;
    	while(num!=0)
    	{
	    str1[i]=48+(num%10);
	    num=num/10;
	    i++;
	}
	str1[i]='\0';
    }
    else 
    {
	str1[0]='0';
	i++;
    }


int k=0;
str[i]='\0';
i--;
if(str1[0]=='-')
{
    str[0]='-';
    k++;
    while(i>0)
    {
	str[k]=str1[i];
    	i--;
    	k++;
    }
}
else
{
    while(i>=0)
    {
    str[k]=str1[i];
    i--;
    k++;
    }
}

return *(str);
}
