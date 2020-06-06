#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 5;
  for (i = n-1; i>=0; i--)
    {
      for (j = -n+1; j <=n-1; j++)
	{
	  if(i>=abs(j))
	  printf ("*");
	  else
	 printf(" ");
	}
	printf("\n");
	}
	return 0;
}

/*
                                            *********
                                             ******* 
                                              *****  
                                               ***   
                                                *    
*/
