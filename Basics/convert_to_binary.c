// input=10
// output=1010
#include <stdio.h>

int main()
{
    int n,r=0,i=1,bin=0;
    printf("Enter Decimal n.o : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        bin=bin+r*i;
        n=n/2;
        i=i*10;
    }
    printf("binary n.o = %d",bin);
    return 0;
}
