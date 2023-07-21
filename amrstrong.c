#include <stdio.h>
#include<math.h>
void main()
{
    int n,rem,res=0,d;
    printf("ENTER THE N VALUE:");
    scanf("%d",&n);
    int c=n;

    while(c!=0)
    {
        c/=10;

        d++;
    }
    c=n;
    while(c!=0)
    {
        rem=c%10;
        res=res+pow(rem,d);
      //res=res+370rem*rem*rem;
        c/=10;


    }


    if(res==n)
    {
        printf("amstrong number");
    }
else{

     printf("not amstrong number");
}
}
