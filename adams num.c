#include<stdio.h>
void main()
{

    int n,s,rem=0,rev,ss;
    printf("enter the num n:");
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }

    ss=rev*rev;
    int j,rem1,rev1=0;
     while(ss!=0)
     {

        rem1=ss%10;
        rev1=rev1*10+rem1;
         ss/=10;
     }
     if(s==rev1)
     {
         printf(" The number is adams numbers");
     }
     else{

        printf("The number is not adams numbers");
     }

    }







