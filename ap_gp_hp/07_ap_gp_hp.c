#include<stdio.h>  

int main()
{
    int a,r,n,ap=0,gp=0,i;
    float hp=0;
    printf("Enter the First Number 'A': ");
    scanf("%d",&a);
    printf("Enter the Common Difference / Ratio 'R':");
    scanf("%d",&r);
    printf("Enter the number of terms 'N':");
    scanf("%d",&n);
    
    if(n>0 && a>0 && r>0)
    {
	printf("AP=");
	ap=a;
	printf("%d",ap);
        for(i=0;i<n-1;i++)
        {
	    ap=ap+r;
	    printf(",%d",ap);
	}
	printf("\n");
	
	printf("GP=");
	gp=a;	
	printf("%d",gp);
        for(i=0;i<n-1;i++)
        {
	    gp=gp*r;
	    printf(",%d",gp);
	}
	printf("\n");

	
	printf("HP=");
	hp=1/(float)a;	
	printf("%f",hp);
        for(i=1;i<n;i++)
        {
	    hp=1/(float)(a+i*r);
	    printf(",%f",hp);
	}
	printf("\n");
    }
	
    else
    {
        printf("Invalid input");
    }
    return 0;
}
