#include <stdio.h>

int main()
{
    int num,n1,n2;
    scanf("%d",&num);
    printf("%d:",num/(60*60));
    n1=num%(60*60);  
    printf("%d:",n1/(60));
    n2=n1%(60);
    printf("%d",n2);
    return 0;
}
