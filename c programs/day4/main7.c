#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter the number ");
    scanf("%d",&x);
    int *p=&x;
    int fact=1;
    while(*p>0)
    {
        fact=fact*(*p);
        (*p)--;
    }
    printf("Factorial of %d is %d",*p,fact);
    return 0;
}