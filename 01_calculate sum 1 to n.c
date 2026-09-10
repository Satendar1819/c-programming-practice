#include <stdio.h>
int main()
{
    int n, i ,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            sum=sum+i;
            printf("%d",i );

        }
        else
        {
            sum=sum+i;
            printf("+%d",i);
        }

    }
    printf("=%d",sum);
       
    
    
}
