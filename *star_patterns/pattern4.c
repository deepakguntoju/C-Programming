#include <stdio.h>
int main ()
{
  int i,j,n = 5;
  int count=n;
  for (i = 1; i <= n; i++)
    {
      for (j = n; j >=1 ; j--)
	{
	    if(j<=count)
	  printf ("*");
	  else
	  printf(" ");
	}
	count--;
	printf("\n");
	}
	return 0;
}

/*pattern
                                              *****
                                               ****
                                                ***
                                                 **
                                                  *
*/
