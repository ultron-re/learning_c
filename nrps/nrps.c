#include <stdio.h>

void nrps(char [], int, int);

int main()
{
    int num,i=0;
    int len,k,flag=0;
    char str[10];
    printf("Enter the number characters C : ");
    scanf("%d",&num);
    printf("Enter the Length of the string N : ");
    scanf("%d",&len);
    printf("Enter distinct characters : ");
    scanf("%s",str);
    
    for(i=0;i<num;i++)
    {
	flag=0;
	for(k=0;k<num;k++)
	{
	    if(str[i]==str[k])
	    {
		flag++;
	    }
	}
	if(flag>1)
	{
	    break;
	}
    }

    if(flag>1)
    {
	printf("Error : Enter distinct characters\n");
    }
    else
    {
	nrps(str,num,len);  
    }
  return 0;  
}

void nrps(char str[], int num, int len)
{
    int i=0,count=0,k=0;
    char nrps[len];
    printf("Possible NRPS is ");

    for(i=0;i<len;)
    {
	for(k=0;k<num;k++,i++)
	{
	    if(i<num)
	    {
		nrps[i]=str[k];
	    }
	    else
	    {
	        int flag=(i-((num-1)*count));
		if(flag<num)
             	{
		    nrps[i]=nrps[i-(num-1)];
		}
		else
		{
		    nrps[i]=str[num-flag];
		}
	    }

	}
	count++;	
    }

    for(int l=0;l<len;l++)
    {
	printf("%c",nrps[l]);
    }
    printf("\n");
}
