#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j,fact,m=0,f;
    scanf("%d%d",&f,&n);
    if(i=1)
    i=i+1;
    if(i==0)
    i=i+2;
    i=abs(i);
    for(i=f;i<=n;i++)
    {
        fact=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
            fact++;
            
            }
        }
        
        if(fact==2)
        m=m+i;
    }
    printf("%d",m);
    
}
