#include<stdio.h>  

int main()
{
    int  i,num,sum=1,num1=0,num2=1;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=0)
    {
	printf("%d ",num1);
        while(sum<=num)
	{
	    printf("%d ",sum);
	    sum=num1+num2;
	    num1=num2;
            num2=sum;	    
	}

    }
    else
    {
	printf("Invalid input");
    }
    printf("\n");
    return 0;
}
