# EnrichAssignments
//Word Reverse 
//EX:"rmk college" O/P:kmr egelloc

#include <stdio.h>

char a[100]="Rmk College";
void wordrev(int);
int main(void) {
	// your code goes here
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='')
		{
			wordrev(i);
		}
	}
	wordrev(i);
	return 0;
}
void wordrev(int i)
{
	static int k=0;
	int j,b[100];
	for(j=i-1;a[j]!='';j++)
	{
		b[k]=a[j];
		k++;
	}
	for(k=0;b[k]!='\0';k++)
	{
		printf("%c",b[k]);
	}
}
