/*
ABCBA
ABCBA
ABCBA
*/
int main()
{
    int i,j,n;
    char ch;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=1;j<=2*n-1;j++)
        {
            printf("%c",ch);
            if(j<n)
            ch++;
            else
            ch--;
        }
        printf("\n");
    }
    return 0;
}
