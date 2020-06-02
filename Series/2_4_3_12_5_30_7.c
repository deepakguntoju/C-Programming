#include<stdio.h>
 //input length of series
void main()
{
    long int i=2,j,x=1,k,c,cc;
    long int n;
    scanf("%ld",&n);
    for(x=1;x<=n;x++){
        if(x%2!=0)
        {
            
            //printf("x=%d\n",x);
    for(i;i<=n+100000;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
         
       if(c==0)
        {
            k=i;
           printf("%ld ",i);
            i++;
            break;
        }
    }
    }
    
    if(x%2==0){
        cc=k*x;
        printf("%ld ",cc);
    }
    }
}