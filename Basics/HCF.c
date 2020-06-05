/*Given two numbers A and B. The task is to find out their LCM and GCD.

Input format
There are two numbers A and B separated by space.

Output format
print LCM and GCD separated by space.

Code constraints
1 <= A <= 10^8
1 <= B <= 10^8*/

#include<stdio.h>
int main()
{
    long int n1,n2,i,gcd,lcm;
    scanf("%ld%ld",&n1,&n2);
    
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("%ld ",n1*n2/gcd);
    printf("%ld",gcd);
}
