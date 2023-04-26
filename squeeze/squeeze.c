#include <stdio.h>

void squeeze(char [], char []);

int main()
{
    char str1[30];
    char str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    
    printf("Enter string2:");
    scanf("%s", str2);

    squeeze(str1,str2);

    return 0;   
}

void squeeze(char str1[], char str2[])
{
    int i=0;
    while(str2[i]!='\0')
    {
	for(int k=0;str1[k]!='\0';k++)
	{
	    if(str1[k]==str2[i])
	    {
		for(int l=k;str1[l]!='\0';l++)
		{
		    str1[l]=str1[l+1];
		}
	    }
	}
	i++;
    }

    printf("After squeeze s1 : %s\n", str1);
}
