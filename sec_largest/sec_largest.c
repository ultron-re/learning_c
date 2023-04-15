#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements into the array :");

    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}


int sec_largest(int arr[], int size)
{
 int s_large=0;
 int f_large=arr[0];
 for(int i=1;i<size;i++)
 {
     if(f_large<arr[i])
     {
         s_large=f_large;
         f_large=arr[i];
     }
     else
     {
	 if(s_large<arr[i])
	 {
	     s_large=arr[i];
	 }
     }
 }
 return s_large;
}
