# EnrichAssignments
//All possibilities to print the elements in an array


#include <stdio.h>
int main() 
{
	int a[3]={1,2,3};
	int i,j;
	for(i=0;i<3;i++)
	{
	 printf("%d\n",a[i]);
	  for(j=0;j<3;j++)
    {
		  if((i>j)||(j>i && j!=i))
		  {
		   printf("%d",a[j]);
		  }
	  }
	  printf("\n");
	}
	for(i=0;i<3;i++)
	{
	  printf("%d",a[i]);
	}
	return 0;
}
