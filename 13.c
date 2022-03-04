#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p=0;
    scanf("%d",&n);
    int a[n][n],at[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the %d element of row %d of matrix A ",j+1,i+1);
            scanf("%d",&a[i][j]);
            at[j][i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(at[i][j]!=a[i][j])
            {
                p++;
                break;
            }
        }
    }
    if(p!=0)
    {
        printf("The matrix is not symmetric");
    }
    else
    {
        printf("The matrix is symmetric");
    }
    return 0;
}
