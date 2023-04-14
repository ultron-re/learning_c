/*

Rahul S

Program to implement our own islower() function

Sample input : 'a'

Sample output :Entered character is lower case alphabet

*/

#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_islower(ch);
    if(ret==1)
    {
        printf("Entered character '%c' is lower case character.\n",ch);
    }
    else
    {
        printf("Entered character '%c' is not lower case character.\n",ch);
    }
}

int my_islower(int ch)
{
    if(ch>=97 && ch<=122)
    {
	    return 1;
    }
    else
    {
	    return 0;
    }
}

