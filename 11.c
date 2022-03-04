#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,Lsum=0,Rsum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the %d element of row %d ",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
            Lsum+=a[i][i];
    }
    printf("%d \n",Lsum);
    int k;
    k=0;
    for(int i=n-1;i>=0;i--)
    {
        Rsum+=a[i][k];
        k++;
    }
    printf("%d \n",Rsum);
    return 0;
}
