#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,y;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
           if(a[i]<a[j])
           {
               y=a[i];
               a[i]=a[j];
               a[j]=y;
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
