#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50];
    printf("Enter number between 30 and 40\n");
    for(int i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<50;i++)
    {
        int rep=1;
        for(int j=i+1;j<50;j++)
        {
            if(a[i]==a[j])
            {
                rep++;
            }
        }
        printf("The number %d has repeated %d\n",a[i],rep);
    }
    return 0;
}
