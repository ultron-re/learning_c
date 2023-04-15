/*

Rahul S

Program to implement our own ispunct() function

Sample input : 'a'

Sample output :Entered character is not a punctuation character

*/

#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;

    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_ispunct(ch);
    if(ret==1)
    {
        printf("Entered character is a punctuation character\n");
    }
    else
    {
        printf("Entered character is not a punctuation character\n");
    }
}

int my_ispunct(int ch)
{
    if(ch>=0 && ch<=31)
    {
	return 0;
    }
    else if(ch>=48 && ch<=57)
    {
	return 0;
    }
    else if(ch>=97 && ch<=122)
    {
	    return 0;
    }
    else if(ch>=65 && ch<=90)
    {
	return 0;
    }
    else
    {
	    return 1;
    }
}
