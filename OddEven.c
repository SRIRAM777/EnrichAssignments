# EnrichAssignments
// odd even triangle.c


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,odd=1,even=2;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",odd);
            odd=odd+2;
        }
        printf("\n");
        for(j=1;j<=(i+1);j++)
        {
            printf("%d ",even);
            even=even+2;
        }
        printf("\n");
    }
    return 0;
}
