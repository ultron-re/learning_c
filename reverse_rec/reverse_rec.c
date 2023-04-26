#include <stdio.h>

void reverse_recursive(char str[], int ind, int len);

int main()
{
    char str[30];
    int ind=0,len=0,i=0;
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    while(str[i]!='\0')
    {
	len++;
	i++;
    }
    
    reverse_recursive(str, ind, len);
    
}

void reverse_recursive(char str[], int ind, int len)
{
    int temp;
    if(ind<len)
    {
        temp=str[ind];
        str[ind]=str[len-1];
        str[len-1]=temp;
        ind++;
        len--;
        reverse_recursive(str,ind,len);
    }

    else
	printf("Reversed string is %s\n", str);

}
