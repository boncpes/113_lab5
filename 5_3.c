#include<stdio.h>
int check(int t)
{
    while(t!=1)
    {
        if(t%2==0)
        {
            t=t/2;
        }
        else if(t%3==0)
        {
            t=t/3;
        }
        else if(t%5==0)
        {
            t=t/5;
        }
        else
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n,i,j,k,t,c;
    scanf("%d",&n);
    for(i=1; i<n;)
    {
        for(j=2; j<n*n; j++)
        {
            c=check(j);
            if(c==0)
            {
                printf("%d ",j);
                i++;
            }
            else if(c==1)
            {
            }
        }

    }
    return 0;
}
