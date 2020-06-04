#include <stdio.h>
#include <math.h>
int main()
{
    int n,count=0,r,nd,o=0;
    scanf("%d",&n);
    nd=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    nd=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        o=o+pow(r,count);
    }
    if(nd==o)
    printf("armstrong");
    else
    printf("Not");
    return 0;
}
