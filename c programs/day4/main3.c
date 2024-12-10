#include<stdio.h>
int bign(int,int);
int main()
{
    int n1,n2,max;
    printf("En ter the first number :");
    scanf("%d",&n1);
    printf("Enter the second number :");
    scanf("%d",&n2);
    max=bign(&n1,&n2);
    printf("The biggest number between %d and %d is %d",n1,n2,max);
    return 0;
}
int bign(*)