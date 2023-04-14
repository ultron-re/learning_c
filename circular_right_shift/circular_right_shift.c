/*

Rahul S

Program 

Sample input : 

Sample output : 

*/

#include <stdio.h>

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_right(num, n);

    print_bits(ret);
}


int circular_right(int num, int n)
{
    int mask=(1<<n)-1;
    int val=(unsigned)num&mask;
    val=val<<(32-n);
    num=((unsigned)num>>n)|val;

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

