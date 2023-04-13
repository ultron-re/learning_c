/*

Rahul S

Program 

Sample input : 

Sample output : 

*/

#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);

    print_bits(ret);
}


int circular_left(int num, int n)
{
    int mask=(1<<n)-1;
    mask=mask<<(31-n);
    int val=num&mask;
    val=val>>(31-n);
    num=(num<<n)|val;

    return num;
}
int print_bits(int ret)
{
    for(int i=31;i>=0;i--)
    {
	if(ret&(1<<i))
	{
	    printf("1 ");
	}
	else
	    printf("0 ");
    }
    printf("\n");

}
