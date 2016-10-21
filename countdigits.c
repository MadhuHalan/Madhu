#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("total digit is: %d",count);
return 0;
}
