#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Rows:- ");
    scanf("%d",&m);
    printf("Column:- ");
    scanf("%d",&n);
    int a[m][n],at[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter value of %d element of row %d ",j+1,i+1);
            scanf("%d",&a[i][j]);
            at[j][i]=a[i][j]; //Transpose
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",at[i][j]);
        }
        printf("\n");
    }
    return 0;
}
