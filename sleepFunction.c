# EnrichAssignments
//Sleep functiom to display message


#include<stdio.h>
#include<unistd.h>
int main()
{
  int i,delay=100;
  char msg[]="Happy Pongal";
  for(i=0;i!='\0';i++)
  {
    pintf("%c",msg[i]);
    sleep(delay);
  }
  return 0;
}
