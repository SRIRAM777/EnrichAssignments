#EnrichAssignments
// To print the given number in words


#include <stdio.h>
void ones(int n)
{
	switch(n)
	{
		case 0:
			printf("zero\t");
			break;
		case 1:
			printf("one\t");
			break;
		case 2:
			printf("two\t");
			break;
		case 3:
			printf("three\t");
			break;
		case 4:
			printf("four\t");
			break;
		case 5:
			printf("five\t");
			break;
		case 6:
			printf("six\t");
			break;
		case 7:
			printf("seven\t");
			break;
		case 8:
			printf("eight\t");
			break;
		case 9:
			printf("nine\t");
			break;
	}
}
void tens(int n)
{
	switch(n)
	{
		case 11:
			printf("eleven\t");
			break;
		case 12:
			printf("twelve\t");
			break;
		case 13:
			printf("thirteen\t");
			break;
		case 14:
			printf("fourteen\t");
			break;
		case 15:
			printf("fifteen\t");
			break;
		case 16:
			printf("sixteen\t");
			break;
		case 17:
			printf("seventeen\t");
			break;
		case 18:
			printf("eighteen\t");
			break;
		case 19:
			printf("nineten\t");
			break;
	}
}
void tens2(int n)
{
	switch(n)
	{
		case 2:
			printf("twenty\t");
			break;
		case 3:
			printf("thirty\t");
			break;
		case 4:
			printf("forty\t");
			break;
		case 5:
			printf("fifty\t");
			break;
		case 6:
			printf("sixty\t");
			break;
		case 7:
			printf("seventy\t");
			break;
		case 8:
			printf("eighty\t");
			break;
		case 9:
			printf("ninety\t");
			break; 
		
	}
}
int main(void) 
{
	int x,n,count=0,i,j,k;
	scanf("%d\n",&n);
	x=n;
	while(x>0)
	{
		x=x/10;
		count++;
	}
	if(count<4)
	{
		if(count==1)
		{
			ones(n);
		}
		else if(count>=2)
		{
			if(n<20)
			{
				tens(n);
			}
			else
			{
				i=n%10;
				n=n/10;
				j=n%10;
				n=n/10;
				k=n%10;
				ones(k);
				if(j!=0)
				{
					printf("hundred and\t");
					tens(j);
				}
				else
				{
					printf("hundred\t");
				}
				tens2(j);
				if(i!=0)
				{
					ones(i);
				}
			}
		}
	}
	else
	{
		printf("\nLimit exceeds enter the number within the range 0-999\n");
	}
	return 0;
}
