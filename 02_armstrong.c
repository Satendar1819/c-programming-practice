#include <stdio.h>
#include<math.h>
int main()
{
   int n,rem,sum=0,count=0,pre,pre1;
   printf("Enter the value of n :");
   scanf("%d",&n);
   pre=n,pre1=n;
   while(n>0)
   {
    count=count+1;
    n=n/10;
   }
   while (pre>0)
   {
    rem=pre%10;
    sum=sum+pow(rem,count);
    pre=pre/10;
   }
   if(sum==pre1)
   {
    printf("number is armstrong");

   }
   else
   {
    printf("number is not armstrong");
   }
}
