#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the positive integers");
scanf("%d",&n);
for(i=1;i<=n;++1)
{
sum=sum+i;
}
printf("Sum=%d",sum);
return 0;
}
