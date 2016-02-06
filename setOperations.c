// Enrich class codes
// set operations (venn diag)


#include<stdio.h>
// A + B :

void sum(int a[],int b[],int c[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		c[j]=a[i];
		j++;
	}
	for(i=0;b[i]!=0;i++)
	{
		c[j]=b[i];
		j++;
	}
}	

// A -B :

int sub(int a[],int b[],int c[])
{
	int i,j,k=0,count=0,Ucount=0;
	for(i=0;a[i]!=0;i++)
	{
		for(j=0;b[j]!=0;j++)
		{
			if(a[i]!=b[j])
			{
				Ucount=0;
			}
			else
			{
				count++;
				break;
			}
		}
		if( (count=0) && (Ucount==0) )
		{
			c[k]=a[i];
			k++;
		}
	}
}

// A U B :
	
int uni(int a[],int b[],int c[])
{
	int i,j,k,count=0;
	for(i=0;a[i]!=0;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(i=0;b[i]!=0;i++)
	{
		for(j=0;j<3;j++)
		{
			if(b[i]!=c[j])
			{
				count=0;
			}
			else
			{
				count++;
				break;
			}
		}
		if(count=0)
		{
			c[k]=b[i];
			k++;
		}
		
	}
}	

// A ^ B :

/*int intersect(int a[],int b[])
{
	int c[10],i,j,k=0;
	for(i=0;a[i]!=0;i++)
	{
		for(j=0;j<b[j]!=0;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
}


// B - A :

int diff(int a[],int b[])
{
	int c[10],i,j,k=0;
	for(i=0;b[i]!=0;i++)
	{
		for(j=0;a[j]!=0;j++)
		{
			if(b[i]==a[j])
			{
				break;
			}
			else
			{
				c[k]=b[i];
				k++;
			}
		}
	}
}
*/

void main()
{
	int a[10]={1,3,5},b[10]={1,10,5,20},c[10];
	int i;
	printf("A + B :\n");
	sum(a,b,c);
	for(i=0;c[i]!=0;i++)
	{
		printf("%d\n",c[i]);
	}
	
	printf("A - B :\n");
	sub(a,b,c);
	for(i=0;c[i]!=0;i++)
	{
		printf("%d\n",c[i]);
	}

	printf("A U B :\n");
	uni(a,b,c);
	for(i=0;c[i]!=0;i++)
	{
		printf("%d\n",c[i]);
	}
	
/*	printf("A ^ B :\n");
	intersect(a,b,res);
	for(i=0;res[i]!=0;i++)
	{
		printf("%d\n",res[i]);
	}

	printf("B - A :\n");
	diff(a,b,res);
		for(i=0;res[i]!=0;i++)
	{
		printf("%d\n",res[i]);
	}
*/
}
