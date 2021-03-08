#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n;
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
        if(i==n)
        {
            if(k%2==0)
            {
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
                printf("\n");
            }
        }
    }
    for(i=n-1; i>0; i--)
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
