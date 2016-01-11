# EnrichAssignments
//Siamese method to solve odd sized square matrix


#include<stdio.h>
int magicSquare(int);
int main()
{
    int n , magicConstant;
    printf("enter the odd sized matrix\n");
    scanf("%d",&n);
    magicConstant =  n*(n*n+1)/2;
    printf("\nMagic Constant for the given %d*%d matrix is: %d\n", n,n,magicConstant);
    magicSquare(n);
    return 0;
}
int magicSquare(int n)
{
    int a[100][100];
    int i = 0,j = n/2,k;
    if(n% 2 != 0)
    {
        for (k = 1; k <= n*n; )
        {
            if (i==-1 && j==n) 
            {
            	i = 1;
              j = n-1;
            }
            else
            {
                if (i < 0)
                {
                  i = n-1;
                }
                if (j == n)
                {
                  j = 0;
                }
            }
            if (a[i][j])
            {
            	i = i + 2;
              j = j-1;
              continue;
            }
            else
            {
              a[i][j] = k++; 
            }
            i--;
            j++; 
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
            	 printf("%d\t ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

