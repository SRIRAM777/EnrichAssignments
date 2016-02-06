// Enrich class program
//


#include<stdio.h>
void main()
{
	int a[10]={10,20,16,30,12},count,i,j=0,n=2,t;
	int fcount[10];
	for(i=0;i<n;i++)
	{
		n=2;
		count=0;
		while(a[i]>=n)
		{
			if(a[i]%n==0)
			{
				count++;
			}
			n++;
		}
		fcount[j]=count++;
		j++;
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(fcount[i]>fcount[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;a[i]!=0;i++)
	{	
		printf("%d\n",a[i]);
	}
}
