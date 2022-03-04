#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,od=0;
    scanf("%d",&n);
    int a[n];
    int odd[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even:- ");
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           printf("%d ",a[i]);
       }
       else
       {
           odd[od]=a[i];
           od++;
       }
    }
    printf("Odd:- ");
    for(int i=0;i<od;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("Prime:- ");
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=2;j<a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                p++;
                break;
            }
        }
        if(p==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
