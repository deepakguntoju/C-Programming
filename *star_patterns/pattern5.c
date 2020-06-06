#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i,j,n = 5;
//  int count=n;
  for (i = 0; i < n; i++)
    {
      for (j = -n+1; j <=n-1; j++)
	{
	  if(i>=abs(j))
	  printf ("*");
	  else
	 printf(" ");
	}
//	count--;
	printf("\n");
	}
	return 0;
}
/*
    *    
   ***   
  *****  
 ******* 
*********
*/
