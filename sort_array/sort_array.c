#include <stdio.h>

void print_sort(int [], int);

int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
}

void print_sort(int arr[], int size)
{
    printf("After sorting:");
    int ssmall=arr[0];
    int large=arr[0];;
    int small;
    int count=0;
    for(int i=0;i<size;i++)
    {
	ssmall=large;
        for(int k=0;k<size;k++)
	{
	    if(large<arr[k])
	    {
		large=arr[k];
	    }
	    if(ssmall>arr[k]&&count==0)
	    {
		ssmall=arr[k];
	    }
	    else if(arr[k]>small&&arr[k]<ssmall)
	    {
		ssmall=arr[k];
	    }
	}
	small=ssmall;
	printf("%d ",small);
	count++;
    }
    printf("\n");
}
