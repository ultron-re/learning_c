/*

Rahul S
16/10/2022
Program to print day

Sample input : 

Sample output : 
*/

#include<stdio.h>  

int main()
{
    int n,i=0,k,option;
    printf("Enter the value of 'n':");
    scanf("%d",&n);
    if(n>0 && n<=365)
    {
        printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
        printf("Enter the option to set the first day:");
        scanf("%d",&option);
	i=((option+(n-1))%7);
        if(option>0 && option<=7)
        {
            switch(i)
            {
		case 1:
		    printf("The day is Sunday\n");		    break;
		
		case 2:
		    printf("The day is Monday\n");
		    break;
		
		case 3:
		    printf("The day is Tuesday\n");
		    break;

		case 4:
		    printf("The day is Wednesday\n");
		    break;

		case 5:
		    printf("The day is Thursday\n");
		    break;

		case 6:
		    printf("The day is Friday\n");
		    break;

		case 0:
		    printf("The day is Saturday\n");
		    break;

					
            }
        }
        else
        {
	    printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }

    return 0;
}
