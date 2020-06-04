/*Last non-zero digit of a factorial

Given a number n, find the last non-zero digit in n!.

Examples:
Input : n = 5
Output : 2
5! = 5 * 4 * 3 * 2 * 1 = 120

Last non-zero digit in 120 is 2.

Input format
The line of each test cases consists of N space separated non negative integers

Output format
Print the right most non zero digit in the product of the numbers. If there is no right most non zero digit, then print -1.

*/
#include<stdio.h>
int main()
{
    int fact=1,n,i,flag=1;
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    if(fact%10!=0)
        {
            flag=0;
        printf("%d",-1);
        }
    while(flag && fact>0)
    {
        fact=fact/10;
        if(fact%10!=0){
        printf("%d",fact%10);
        fact=0;
        }
        else
        continue;
            
        
    }
}
