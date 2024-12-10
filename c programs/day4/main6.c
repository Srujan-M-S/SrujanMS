#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter the number  ");
    scanf("%d",&n);
    int *num=&n;
    f=fact(n);
    printf("The factorial of %d is %d",n,f);
    return 0;
}
int fact(int *num)
{

}