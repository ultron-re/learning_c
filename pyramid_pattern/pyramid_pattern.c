/*

Rahul S
16/10/2022
Program to print the numbers in X format

Sample input : 4

Sample output : 

4
34
234
1234
234
34
4

*/

#include<stdio.h>  

int main()
{
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=num;i>=1;i--)
    {
	for(int k=i;k<=num;k++)
	{
	    printf("%d",k);
	}
	printf("\n");
    }

    for(i=2;i<=num;i++)
    {
	for(int k=i;k<=num;k++)
	{
	    printf("%d",k);
	}
	printf("\n");
    }
    return 0;
}
