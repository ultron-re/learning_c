/*

Rahul S
16/10/2022
Program to print all primes using Sieve of Eratosthenes method

Sample input : 

Sample output : 

*/

#include<stdio.h>  

int main()
{
    int n,i,first,k;
    printf("Enter the value of 'n':");
    scanf("%d",&n);

    if(n>1)
    {
	int arr[n];
	first=2;
	for(i=0;i<n-2;i++)
	{
	   arr[i]=first;
	   first++;
	}
	for(i=0;i<n-2;i++)
	{
	    for(k=i+1;k<n;k++)
	    {
		if(arr[i]==0)
		    break;
		if(arr[k]%arr[i]==0)
		{
		    arr[k]=0;
		}
	    }
	}

	printf("The primes less than or equal to %d are:",n);
	for(i=0;i<n-2;i++)
	{
	    if(arr[i]!=0)
	    {
		printf("%d,",arr[i]);
	    }
	}

       printf("\n");
    }
    else
    {
	printf("Please enter a positive number which is > 1\n");
    }
    return 0;
}
