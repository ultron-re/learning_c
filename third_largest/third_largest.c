/*

Rahul S

Program to find 3rd  largest element in an array.

Sample input : 5
               5 4 2 1 8

Sample output : Third largest element of the array is 4

*/

#include <stdio.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements into the array :");

    for(int i=0;i<size;i++)                                   //loop to receive the array elements
    {
	scanf("%d",&arr[i]);
    }
    ret = third_largest(arr, size);                             //function call
    
    printf("Second largest element of the array is %d\n", ret);
}


int third_largest(int arr[], int size)
{
 int max1=0;
 int max2=0;
 int max3=0,i=0;
 for(int i=0;i<size;i++)                                      //to find the third largest element in the array
 {
     if(max1<=arr[i])
     {
	 max3=max2;
	 max2=max1;
	 max1=arr[i];
     }
     else
     {
	 if(max2<=arr[i])
	 {
	     max3=max2;
	     max2=arr[i];
	 }
	 else
	 {
	     if(max3<arr[i])
	     {
		 max3=arr[i];
	     }
	 }
     }
 }
 return max3;
}
