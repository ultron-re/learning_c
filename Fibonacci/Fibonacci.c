#include <stdio.h>

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit); 
    positive_fibonacci(limit, 0, 1, 0);
}


void positive_fibonacci(int limit, int first, int sec, int third)
{
    if(limit>0)
    {
	if(first<limit)
	{
	    printf("%d ",first);
            third=first+sec;
	    first=sec;
	    sec=third;
	    positive_fibonacci(limit, first, sec, third);
	}
	else
	{
	    printf("\n");
	}
    }
    else
    {
	printf("Invalid input\n");
    }

}
