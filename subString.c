# EnrichAssignments
//To find the Substring and its length from the given string


#include <stdio.h>
void substring(char str[],char substr[],int n,int *len)
{
	int i,j,flag=0;
	substr[0]=str[0];
	(*len)++;
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(str[i]!=substr[j])
			{
				flag=0;
			}
			else 
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			substr[*len]=str[i];
			(*len)++;
		}
	}
	substr[*len]='\0';
}

int main()
{
	char str[50],substr[50];
	int n=8,i,len=0;
	printf("enter the string :\n");
	gets(str);
	n=strlen(str);
	printf("Original string is : %s\n",str);
	printf("Original string length is : %d\n",n);
	substring(str,substr,n,&len);
	len=strlen(substr);
	if(len!=n)
	{
	printf("substring is : %s\n",substr);
	printf("substring length is : %d",len);
	}
	else 
	{
		printf("\nSubsting can not be found for the given string : %s",str);
	}
	return 0;
}
