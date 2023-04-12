/*

Rahul S

Program 

Sample input : 

Sample output : 

*/

#include <stdio.h>

int replace_nbits(int, int, int);

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
    return 0;
}

int replace_nbits(int num, int n, int val)
{
    int mask=1<<n;
    mask=mask-1;
    num=(num&(~(mask)))|(val&mask);
    return num;
}
