/*

Rahul S

Program 

Sample input : 

Sample output : 

*/

#include <stdio.h>
#include <math.h>

int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);

    return 0;
}

int get_nbits(int num,int  n)
{
    int val=1;
    val=1<<n;
    val=val-1;
    num=num&val;
    return num;
}
