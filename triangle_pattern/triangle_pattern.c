
/*

Rahul S
16/10/2022
Program to print the numbers in triangle pattern

Sample input : 5

Sample output : 

*/

#include<stdio.h>  

int main()
{
    int i,num,dig=1;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
	for(int k=1;k<=num;k++)
	{
	    if(i==1)
	    {
		printf("%d ",dig);
		dig++;
	    }
	    else if(k==1)
	    {
		printf("%d ",dig);
		dig++;
	    }
	    else if(k==num-i+1)
	    {
		printf("%d ",dig);
		dig++;
	    }
	    else
	    {
		printf("  ");
	    }
	        
	}
	printf("\n");
    }


    
    return 0;
}
