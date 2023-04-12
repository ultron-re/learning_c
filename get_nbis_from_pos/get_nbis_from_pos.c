#include <stdio.h>

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
    return 0;
}

int get_nbits_from_pos(int num, int n, int pos)
{
    int mask=1<<n;
    mask=mask-1;
    mask=mask<<(pos-n+1);
    num=(num&mask)>>(pos-n+1);
    return num;
}

