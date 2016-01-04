# EnrichAssignments
// Floyd's triangle


#include<stdio.h>
#include<conio.h>
int main()
{
int rowsize,i,j,value=1;
scanf("%d",&rowsize);
for(i=1;i<=rowsize;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",value);
        value++;
    }
    printf("\n");
}
return 0;
}

