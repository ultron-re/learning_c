#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    
    static int count=0;

    if(count==0)
    {
	printf("Enter the value of N : ");
	scanf("%d",&num);
	count++;
    }

    if(num>0)
    {
        fact=fact*(num--);
	main();
    }
    else if(num==0)
    {
	printf("Factorial of the given number is %lld\n",fact);
    }
    else
	printf("Invalid input\n");

}
