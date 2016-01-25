# EnrichAssignments
//To count the number of bits in a given decimal number


#include <stdio.h>

int main(void) {
int n,count=0;
scanf("%d",&n);
if(n==0)
{
  count = 1;
  printf("%d",count);
}
else
{
  while(n>0)
  {
	  n = n/2;
	  count++;
  }
  printf("%d",count);
}
return 0;
}
