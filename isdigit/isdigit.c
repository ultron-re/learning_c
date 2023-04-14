/*

Rahul S

Program to implement our own isxdigit() function

Sample input : 'a'

Sample output :Entered character is hexadecimal digit

*/

#include <stdio.h>

int my_isxdigit(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isxdigit(ch);
    if(ret==1)
    {
        printf("Entered character is an hexadecimal digit\n");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit\n");
    }
}

int my_isxdigit(int ch)
{
    if(ch>=0 && ch<=9)
    {
	return 1;
    }
    else if(ch>=97 && ch<=102)
    {
	    return 1;
    }
    else if(ch>=65 && ch<=70)
    {
	return 1;
    }
    else
    {
	    return 0;
    }
}

