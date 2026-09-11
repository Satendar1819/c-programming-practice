#include <stdio.h>
#include <math.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        if(i==1)
        {
            printf("%d^%d",i,i);
            sum=sum+pow(i,i);
        }
        else
        {
            printf("+%d^%d",i,i);
            sum=sum+pow(i,i)
        }
        
    }
    printf("=%d",sum);
}
    
