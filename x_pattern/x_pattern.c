#include<stdio.h>  

int main()
{
    int num,i,k;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
	for(k=1;k<=num;k++)
	{
	    if(i==k)
	    {
		printf("%d",i);
	    }
	    else if(i+k==num+1)
	    {
		printf("%d",num-i+1);
	    }
	    else
	    {
		printf(" ");
	    }
	}
	printf("\n");
    }
    return 0;
}
