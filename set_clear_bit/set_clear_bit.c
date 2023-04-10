/*

Rahul S
16/10/2022
Program to print the numbers in X format

Sample input : 4

Sample output : 

*/

#include<stdio.h>  

int main()
{
    int num,n,m;
    printf("Enter the numbers:");
    scanf("%d",&num);
    printf("Enter 'N':");
    scanf("%d",&n);
    printf("Enter 'M':");
    scanf("%d",&m);
    if(num&(1<<n))
    {
	num=num&(~(1<<m));
	printf("Updated value of num is %d\n",num);
    }
    else
    {
	printf("Updated value of num is %d\n",num);
    }
    return 0;
}
