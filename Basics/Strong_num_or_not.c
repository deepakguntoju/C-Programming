#include<stdio.h>
int main()
{
    int i,num,m=0,n,fact;
    
    scanf("%d",&num);
    int tnum=num;
    while(tnum>0){
        fact=1;
        n=tnum%10;
        tnum=tnum/10;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    m=m+fact;
    }
    if(m==num)
    printf("Strong Number");
    else
    printf("Not Strong Number");
}
