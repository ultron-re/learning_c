/*

Rahul S

Program to find the median of two unsorted arrays 

Sample input : 

Sample output : 

*/

#include<stdio.h>  

int main()
{
    int nA,nB,i,k,temp,n,a,b;
    float medA,medB;
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&nA);
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&nB);
    int arrA[nA],arrB[nB];

    printf("Enter the elements one by one for Array A:");
    for(i=0;i<nA;i++)
    {
	scanf("%d",&arrA[i]);
    }

    printf("Enter the elements one by one for Array B:");
    for(i=0;i<nB;i++)
    {
	scanf("%d",&arrB[i]);
    }

    for(i=0;i<nA;i++)
    {
	for(k=0;k<nA-1;k++)
	{
	    if(arrA[k]>arrA[k+1])
	    {
	        temp=arrA[k+1];
	        arrA[k+1]=arrA[k];
	        arrA[k]=temp;
	    }
	}
    }

    for(i=0;i<nB;i++)
    {
	for(k=0;k<nB-1;k++)
	{
	    if(arrB[k]>arrB[k+1])
	    {
	        temp=arrB[k+1];
	        arrB[k+1]=arrB[k];
	        arrB[k]=temp;
	    }
	}
    }

    if(nA%2==0)
    {
	a=nA/2;
	medA=(float)(arrA[a-1]+arrA[a])/2;
	printf("Median of array1 : %g\n",medA);
    }
    else
    {	
	medA=arrA[nA/2];
	printf("Median of array1 : %g\n",medA);
    }

    if(nB%2==0)
    {
	b=nB/2;
	medB=(float)(arrB[b-1]+arrB[b])/2;
	printf("Median of array2 : %g\n",medB);
    }
    else
    {	
        medB=arrB[nB/2];
	printf("Median of array2 : %g\n",medB);
    }

    printf("Median of both arrays :%g\n",(medA+medB)/2);
    return 0;
}

