#EnrichAssignments
// Addition of two linked list


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
   struct node *next;
   int data;
};

struct node * list ( char *arr,size_t len)
{
size_t i;
struct node *result, **head;
    for (i=len; i--; )
    {
        if ( arr[i] )
        {
        	break;
        }
    }
    if (i >= len) 
    {
    	return NULL;
    }
    result = NULL;
    head = &result;
    do
    {
        *head = malloc (sizeof **head);
        (*head)->data = arr[i];
        (*head)->next = NULL;
        head = &(*head)->next;
    } while (i--);

return result;
}
int listadd( char sum[], struct node *temp)
{
    int j,val;
    if (!temp)
    return 0;
    j = listadd (sum, temp->next);
    
    sum[j] =sum[j] + temp -> data;
    if (sum[j] >= 10) 
    {
        val =  sum[j] / 10;
        sum[j+1] = sum[j+1] + val;
        sum[j] = sum[j] % 10;
    }
    return j+1;
}


int main (void)
{
    struct node a[] = { {NULL, 2} , {NULL, 3} , {NULL, 7} };
    struct node b[] = { {NULL, 3} , {NULL, 4} };
    struct node *result;
	int ans;
    char array[10];
    a[0].next = &a[1]; 
    a[1].next = &a[2];
    
    b[0].next = &b[1];

    memset(array, 0 , sizeof(array) );
    listadd ( array, a);
    listadd ( array, b);
    result =  list ( array, sizeof(array) );
    for ( ; result; ans )
    {
        printf( " %u ->" , result->data );
        result = result->next;
        ans = result;
    }
    return 0;
}
