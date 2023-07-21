#include<stdio.h>
void main()
{
int n,r,i,flag=0;
printf("enter the n value:");
scanf("%d",&n);
for(i=2;i<n;i++)
{

 r=n%i;
 if(r==0)
 {

  flag++;
}}
if(flag==0)
{
    printf("it is prime ");
}
else{

    printf("not prime");
}

}
