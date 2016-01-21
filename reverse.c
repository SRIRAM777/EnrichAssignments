# EnrichAssignments
//reverse of a give number


#include<stdio.h>
void reverse(int);
int main()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  reverse(n);
  return 0;
}
void reverse(int n)
{
  int m=n,sum=0,r;
  while(n>0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
  printf("\nThe reverse of the number %d is %d",m,sum);
}  
  
