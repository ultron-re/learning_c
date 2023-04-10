/*

Rahul S
16/10/2022
Program to count the number of set bits in a given number and print its parity

Sample input : 

Sample output : 

*/

#include<stdio.h>  

int main()
{
    int num,i,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=0;i<31;i++)
    {
	if(num&(1<<i))
	{
	    count++;
	}
    }
    printf("Number of set bits=%d\n",count);

    if(count%2==0)
    {
	printf("Bit parity is Even\n");
    }
    else
	printf("Bit parity is Odd\n");




    return 0;
}
