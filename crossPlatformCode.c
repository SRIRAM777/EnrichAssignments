# EnrichAssignments
// Cross platfom code to use Sleep function


#ifdef _WIN64
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include<stdio.h>
int main()
{
  int i,delay = 100;
  char msg[]="HAPPY PONGAL";
  #ifdef _WIN64
  for(i=0;i!='\0';i++)
  {
      printf("%c",msg[i]);
      sleep(delay);
  }  
  
  #else
  for(i=0;i!='\0';i++)
  {
      printf("%c",msg[i]);
      usleep(delay*1000);
  }
  #endif

 return 0;
}
