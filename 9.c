#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Rows:- ");
    scanf("%d",&m);
    printf("Column:- ");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter value of %d element of row %d ",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
