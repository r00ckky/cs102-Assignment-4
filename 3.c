#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        a[i]=d;
        int sum=0;
        while(a[i]>1)
        {
            int e;
            d=d/10;
            e=a[i]-d*10;
            if(e%2==0)
            {
                sum+=e;
            }
        }
        printf("%d",sum);
    }
    return 0;
}
