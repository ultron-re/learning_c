#include <stdio.h>

int pangram(char []);

int main()
{
    char str[200];
    int arr[26]={0},val,i=0,count=0;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
	if(str[i]>=65&&str[i]<=90)
	{
	    val=str[i]-65;
	}
	else if(str[i]>=97&&str[i]<=122)
	{
	    val=str[i]-97;
	}
	
        arr[val]=1;
	i++;
    }

    for(int k=0;k<26;k++)
    {
	if(arr[k]!=1)
	{
	    count++;
	}
    }

    if(count==0)
    {
	printf("The Entered String is a Pangram String\n");
    }
    else
    {
	printf("The Entered String is not a Pangram String\n");
    }


return 0;    
}
