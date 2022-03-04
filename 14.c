#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5],k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(k<a[i][j])
            {
                k=a[i][j];
            }
        }
    }
    printf("%d",k);
    return 0;
}
