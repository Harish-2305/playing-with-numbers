#include<stdio.h>
int fact(int r)

{
int i,k=1;
for(i=1;i<=r;i++)

{
    k=k*i;


}
return k;

}
int main()
{
    int n,rev=0, sum=0;
    printf("enter the no.");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        int rem=n%10;
        int rev= fact(rem);
        n/=10;
        sum=sum+rev;
    }


    if(temp==sum)
    {
        printf("strong");
    }
    else{

        printf("not strong");

    }
return 0;

}
