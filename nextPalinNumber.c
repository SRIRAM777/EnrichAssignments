# EnrichAssignments
// To find the next palindrome number of a given number


#include<stdio.h>
int main(void)
{
	int n,a,count=0,sum=0,r;
	scanf("%d\n",&n);
	while(count!=1)
	{
		n++;
		a=n;
		while(n>0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}
		if(a==sum)
		{
			count=1;
		}
	}
	printf("%d",sum);
	return 0;
}
