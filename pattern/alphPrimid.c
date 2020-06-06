#include <stdio.h>


int main()
{
    int i,j,n,x,diff;
    char ch;
    scanf("%d",&n);
    diff=n-1;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(x=1;x<=diff;x++)
        {
            printf(" ");
        }
        diff--;
        for(j=1;j<=2*i-1;j++)
        {
            
            printf("%c",ch);
            if(j<i)
            ch++;
            else
            ch--;
        }
        printf("\n");
    }

    return 0;
}
