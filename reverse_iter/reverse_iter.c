#include <stdio.h>

void reverse_iterative(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
}

void reverse_iterative(char str[])
{
    int len=0,temp=0,i=0;
    while(str[i]!='\0')
    {
	len++;
	i++;
    }

    for(i=0;i<=(len-1)/2;i++)
    {
	temp=str[i];
	str[i]=str[len-1-i];
	str[len-1-i]=temp;
    }
    
    printf("Reversed string is %s\n", str);
}
