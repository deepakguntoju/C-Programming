#include <stdio.h>
int main ()
{
  int i,j,n = 5;
  int count=n;
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("*");
	}
	printf("\n");
	}
	return 0;
}

/*pattern
                                                          *
                                                          **
                                                          ***
                                                          ****
                                                          *****
*/
