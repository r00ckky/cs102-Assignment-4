#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,q,r;
    printf("Rows for matrix A:- ");
    scanf("%d",&n);
    printf("Columns for matrix A:- ");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter the %d element of row %d of matrix A ",j+1,i+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Rows for matrix B:- ");
    scanf("%d",&q);
    printf("Columns for matrix B:- ");
    scanf("%d",&r);
    int b[q][r];
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("Enter the %d element of row %d of matrix A ",j+1,i+1);
            scanf("%d",&b[i][j]);
        }
    }
    int mas;
    printf("Select 1 for addition, 2 for subtraction and 3 for multiplication ");
    scanf("%d",&mas);
    if(mas==1){
        if(n==q && m==r)
        {
            int sum[m][n];
            for(int i=0;i<m;i++)
            {
                 for(int j=0;j<n;j++)
                 {
                      sum[i][j]=a[i][j]+b[i][j];
                 }
             }
            printf("The sum of A and B matrix:-\n");
            for(int i=0;i<m;i++)
            {
                 for(int j=0;j<n;j++)
                 {
                     printf("%d ",sum[i][j]);
                 }
                 printf("\n");
            }
        }
        else
        {
            printf("The sum of both matrix is not possible");
        }
    }
    else if(mas ==2){
        if(n==q && m==r)
        {
            int sub[m][n];
            for(int i=0;i<m;i++)
            {
                 for(int j=0;j<n;j++)
                 {
                      sub[i][j]=a[i][j]-b[i][j];
                 }
             }
            printf("The sub of A and B matrix:-\n");
            for(int i=0;i<m;i++)
            {
                 for(int j=0;j<n;j++)
                 {
                     printf("%d ",sub[i][j]);
                 }
                 printf("\n");
            }
        }
        else
        {
             printf("The subtraction of both matrix is not possible");
        }
    }
    else if(mas==3){
        if(n==r)
        {
            int mul[q][m];
            for(int i=0;i<q;i++)
            {
               for(int j=0;j<m;j++)
               {
                   for(int k=0;k<m;k++)
                   {
                       mul[i][j]+=a[i][k]*b[k][j];
                   }
               }
            }
            for(int i=0;i<q;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%d ",mul[i][j]);
                }
                printf("\n");
            }
            return 0;
        }
        else if(q==m)
        {
            int mul[r][n];
            for(int i=0;i<r;i++)
            {
               for(int j=0;j<n;j++)
               {
                   for(int k=0;k<n;k++)
                   {
                       mul[i][j]+=a[i][k]*b[k][j];
                   }
               }
            }
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%d ",mul[i][j]);
                }
                printf("\n");
            }
            return 0;
        }
        else if(n==r && q==m && n==m)
        {
            int mul[r][n];
            for(int i=0;i<r;i++)
            {
               for(int j=0;j<n;j++)
               {
                   for(int k=0;k<n;k++)
                   {
                       mul[i][j]+=a[i][k]*b[k][j];
                   }
               }
            }
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%d ",mul[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("The multiple of the matrices cannot be calculated");
        }
        return 0;
    }
    return 0;
}
