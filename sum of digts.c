#include<stdio.h>
void main()
{

    int a,rev=0,r,n;
    printf("enter the value of a:");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=rev+r;
        a=a/10;
    }
    printf("%d",rev);
}

