#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 8;
  int count=0;
  for (i = 0; i<=n; i++)
    {
      for (j = 0; j <=n; j++)
	{
	  if(j>=count)
	  printf ("* ");
	  else
	 printf(" ");
	}
	count++;
	printf("\n");
	}
	return 0;
}

/*
* * * * * * * * * 
 * * * * * * * * 
  * * * * * * * 
   * * * * * * 
    * * * * * 
     * * * * 
      * * * 
       * * 
        * 
*/
