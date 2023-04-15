#include <stdio.h>

void fun(int [], int , int [], int *);


int main()
{
    int size,i;
    int *new_size;

    printf("Enter the size:");
    scanf("%d",&size);

    int arr1[size],arr2[size];

    printf("Enter elementsinto the array:");
    for(i=0;i<size;i++)
    {
	scanf("%d",&arr1[i]);
    }

    fun(arr1,size,arr2,new_size);

    return 0;
}


void fun(int arr1[], int size, int arr2[], int *new_size)
{
    int i,k,count=0,temp=0;
    *new_size=size;
    for(i=0;i<size;i++)
    {
	count=0;
	for(k=0;k<size;k++)
	{
	    if(arr1[i]==arr2[k])
	    {  
	        count++;
            }
	}
       	if(count==0)
	{
	    arr2[temp]=arr1[i];
	    temp++;
	}
	else
	{
	    *new_size=*new_size-1;
	}
    }

    for(i=0;i<*new_size;i++)
    {
	printf("%d ",arr2[i]);
    }
    printf("\n");
}
