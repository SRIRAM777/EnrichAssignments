# EnrichAssignments
//pascals triangle


#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],i,j,n;
    scanf("%d",&n);
    a[0][0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           a[i][j]=a[i-1][j-1]+a[i-1][j];
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
