#include<stdio.h>
int main()
{
int n,j,m,i=10,a;
    printf("Enter the number=");
    scanf("%d",&n);
    while(i<=n)
    {
        j=i;
        a=0;
        while(j!=0)
        {
            m=j%10;
            if(m==0)
            {
                a++;
            }
            j=j/10;
        }
        if(a!=0)
        {
            printf("\n%d",i);
        }
        i++;
    }
    }

