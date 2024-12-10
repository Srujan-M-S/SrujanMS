#include<stdio.h>
int fact(int );
int main()
{
    int n,fac;
    printf("Enter the number ");
    scanf("%d",&n);
    fac=fact(n);
    printf("the factorial of%d is %d",n,fac);
    return 0;
}
int fact(int f)
{
    int i;
    while( i=n;i>0;i--)
{
    f=i*fact(i-1);
}
return 0;
}
