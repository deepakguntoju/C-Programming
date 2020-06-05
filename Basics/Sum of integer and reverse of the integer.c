/*Sum of integer and reverse of the integer.
  You are given a positive integer N. You have to reverse the digits of N. Let us denote this number by R. You must output N+R.

**Explanation**

   The reverse of 547 is 745. The sum of 547 and 745 is 1292.

 **Sample Input:**
547

**Sample output**
1292

Input format
 A positive integer.

Output format
The sum of the integer and the reverse of the integer.*/

#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int nd=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    printf("%d",nd+sum);
}
