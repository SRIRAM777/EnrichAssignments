//EnrichAssignments
//Square root computation using Babylonian method


#include <stdio.h>
float babylonianSquare(int);
int main() 
{
		int num;
		printf("enter the number to find square root");
		scanf("\n%d",&num);
		printf("\nSquare root of %d is %f",num,babylonianSquare(num));
		return 0;
}
float babylonianSquare(int num)
{
            	int m=num,i,len=0;
                float guess;
		while(m>0)
		{
			m=m/10;
			++len;
		}
		guess=len*10;
		for(i=0;i<10;i++)
		{
		  guess=(guess+(num/guess))/2;
		}
		return guess;
}
	

