#include<stdio.h>
int sumofr(int);
int main()
{
    int n=0;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=sumofr(n);
    printf("Sum of %d is %d",n,sum);
    return 0;
}
int sumofr(int num)
{
    int r;
    if(num==1)
    {
        return 1;
    }
    else
    {
        r=num+sumofr(num-1);
    }
    return 0;
}