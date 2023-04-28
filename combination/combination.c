#include<stdio.h> 

void combination(char [],int);
int my_strlen(char []);

int main()

{
        char str[100];
        int n;
        int res;
        printf("Enter a string: ");
        scanf("%100[^\n]",str);    

	n = my_strlen(str);

	combination(str,n);                       
        return 0;
}

int my_strlen(char str[])
{
    int i;
    while(str[i]!='\0')
    {
	i++;
    }

    return i;
}

void combination(char str[],int n)
{

    int count=0,a=0;

    for(int i=0;i<n;i++)
    {
	count=0;
	for(int k=0;k<n;k++)
	{
	    if(str[i]==str[k])
	    {
		count++;
	    }
	}

	if(count>1)
	{
	    printf("Error: please enter distinct characters.\n");
	    return;
	}
    }

    printf("All possible combinations of given string :");
    int flag=0;
    char temp,temp1,prev=str[0];
    int b=1;
    int fact=1;
    while(b<=n)
    {
	fact=fact*(b);
	b++;
    }
    while(a<fact)
    {
	flag++;
	if(flag<=(fact/n))
	{
            printf("%s\n",str);
	    if(flag!=((fact/n)-1))
	    {
	        temp=str[n-flag];
	        str[n-flag]=str[n-(flag+1)];
	    	str[n-(flag+1)]=temp;
	    
	    }
	    prev=str[0];
	    a++;
	    
	}
	else
	{
	    temp1=str[0];
	    str[0]=str[n-1];
	    str[n-1]=temp1;
	    flag=0;
	}
    }
}
