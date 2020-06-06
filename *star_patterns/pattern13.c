#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 7;
  int count=0;
  for (i = -n; i<=n; i++)
    {
      for (j = -n; j <=n; j++)
	{
	  if(abs(j)>=abs(i))
	  printf ("* ");
	  else
	 printf("  ");
	 count++;
	}
	count=0;
	printf("\n");
	}
	return 0;
}
/*
*                           * 
* *                       * * 
* * *                   * * * 
* * * *               * * * * 
* * * * *           * * * * * 
* * * * * *       * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * * * * * * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * *       * * * * * * 
* * * * *           * * * * * 
* * * *               * * * * 
* * *                   * * * 
* *                       * * 
*                           * 

*/
