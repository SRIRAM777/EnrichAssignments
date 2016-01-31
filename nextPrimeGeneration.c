//EnrichAssignments
//next prime number generation


#include <stdio.h>
int main()
{
	int n,prime=0;
	scanf("%d",&n);
	int m=n;
	switch(n)
	{
		case 2:
			n=3;
			printf("The next prime number of %d is %d",m,n);
			break;
		case 3:
			n=5;
			printf("The next prime number of %d is %d",m,n);
			break;
		case 5:
			n=7;
			printf("The next prime number of %d is %d",m,n);
			break;
		case 7:
			n=11;
			printf("The next prime number of %d is %d",m,n);
			break;
		default:
			while(prime==0)
			{
				n=n+1;
				if((n%2!=0)&&(n%3!=0)&&(n%5!=0)&&(n%7!=0))
				{
					prime++;
				}
			}
			printf("The next prime number of %d is %d",m,n);
			break;
	}
	return 0;
}
