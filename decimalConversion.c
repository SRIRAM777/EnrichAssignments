# EnrichAssignments
//Decimal to any number conversion


#include <stdio.h>
int main() {
	int a[100],decimalNo,base,i=0,j;
	scanf("%d%d",&decimalNo,&base);
	while(decimalNo>0)
	{
		a[i]=decimalNo%base;
		decimalNo=decimalNo/base;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		if(a[j]>=10)
		{
			a[j]=a[j]+55;
		}
		else
		{
			a[j]=a[j]+'0';
		}
		printf("%c",a[j]);
	}
	return 0;
}
