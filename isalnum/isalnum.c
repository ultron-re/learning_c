/*

Rahul S

Program to implement our own isalnum() function

Sample input : 

Sample output : 

*/

#include <stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isalnum(ch);
    if(ret==1)
    {
        printf("The character '%c' is an alnum character.\n",ch);
    }
    else
    {
        printf("The character '%c' is not an alnum character.\n",ch);
    }
}

int my_isalnum(int ch)
{
    if(ch>=48 && ch<=57)
    {
	    return 1;
    }

    else if(ch>=65 && ch<=90)
    {
	    return 1;
    }

    else if(ch>=97 && ch<=122)
    {
	    return 1;
    }
    else
    {
	    return 0;
    }
}

