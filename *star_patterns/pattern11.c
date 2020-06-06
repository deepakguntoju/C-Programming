#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 8;
  int count=0;
  for (i = -n/2; i<=n/2; i++)
    {
      for (j = -n/2; j <=n/2; j++)
	{
	  if(abs(i)+abs(j)==0 || (abs(i)+abs(j))%2==0)
	  printf ("* ");
	  else
	 printf("  ");
	}
	count++;
	printf("\n");
	}
	return 0;
}
/*
*   *   *   *   * 
  *   *   *   *   
*   *   *   *   * 
  *   *   *   *   
*   *   *   *   * 
  *   *   *   *   
*   *   *   *   * 
  *   *   *   *   
*   *   *   *   * 

*/
