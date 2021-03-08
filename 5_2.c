#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=(n/2)+1;
    }
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf("_");
        }
        for(j=1; j<=i; j++)
        {
            if(j==1)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        for(j=i-1; j>0; j--)
        {
            if(j==1)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        for(j=i; j<n; j++)
        {
            printf("_");
        }
        printf("\n");
    }


    return 0;
}
