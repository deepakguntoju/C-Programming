//Count n.o of 1's in a binary number
#include <stdio.h>

int main()
{
    int n,r,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        if(r==1)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
