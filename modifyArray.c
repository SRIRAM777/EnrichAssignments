// enrich class codes
// modify array


#include<stdio.h>
void modify(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i=i+2)
	{
		for(j=i+1;j<n;j=j+2)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			break;
		}
	}
}

void main()
{
	int a[]={1,2,3,4,5,6,7},n=7,i;
	modify(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
