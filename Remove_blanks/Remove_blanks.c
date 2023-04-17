#include <stdio.h>

void replace_blank(char []);

int main()
{
    char str[200];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    return 0;
    
}



void replace_blank(char str[])
{
    int i=0;
    int k;
    while(str[i]!='\0')
    {
	if(str[i]==' ')
	{
	    if(str[i-1]==' ')
	    {
		k=i-1;
		while(str[k]!='\0')
	        {
		    str[k]=str[k+1];
		    k++;
		}
	    }
	    else
		i++;
	}
	else if(str[i]=='\t')
	{
	    str[i]=' ';
	}
	else
	    i++;
    }
    int l=0;
    while(str[l]!='\0')
    {
	printf("%c",str[l]);
	l++;
    }
printf("\n");
}
