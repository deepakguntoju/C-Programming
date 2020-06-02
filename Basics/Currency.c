//    Test Data :
//    Input the amount: 375 
//   Expected Output:
// here are:
//    3 Note(s) of 100.00
//    1 Note(s) of 50.00
//    1 Note(s) of 20.00
//    0 Note(s) of 10.00
//    1 Note(s) of 5.00
//    0 Note(s) of 2.00
//    0 Note(s) of 1.00

#include <stdio.h>

int main()
{
    int num=500,n1,n2,n3,n4,n5,n6,n7;
    printf("%d Note(s) of 100.00\n",num/100);
    num=num%100;
    printf("%d Note(s) of 50.00\n",num/50);
    num=num%50;
    printf("%d Note(s) of 20.00\n",num/20);
    num=num%20;
    printf("%d Note(s) of 10.00\n",num/10);
    num=num%10;
    printf("%d Note(s) of 5.00\n",num/5);
    num=num%5;
    printf("%d Note(s) of 2.00\n",num/2);
    num=num%2;
    printf("%d Note(s) of 1.00\n",num/1);

    return 0;
}
