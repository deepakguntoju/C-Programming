#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 8;
  for (i = -n/2; i<=n/2; i++)
    {
      for (j = n/2; j >=0; j--)
	{
	  if(j>=abs(i))
	  printf ("* ");
	  else
	 printf("  ");
	}
	printf("\n");
	}
	return 0;
}
/*
                                              *    
                                              **   
                                              ***  
                                              **** 
                                              *****
                                              **** 
                                              ***  
                                              **   
*    
*/
