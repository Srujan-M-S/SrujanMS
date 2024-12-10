//create it in case:
#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mulp(int,int);
int div(int,int);
int mod(int,int);
int main()
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    printf("Sum of two numbers is : %d\n", sum(a,b));
    printf("Subtraction of two numbers is : %d\n", sub(a,b));
    printf("Multiplication of two numbers is : %d\n", mulp(a, b));
    printf("Division of two numbers is : %d\n", div(a, b));
    printf("Modulus of two numbers is : %d\n", mod(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    if(a>b)
    {
        return a - b;
    }
    else
    return b - a;
}
int mulp(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if(b==0)
    {
        printf("Division by zero is not possible\n");
        return 0;
    }else
        return a / b;
}
int mod(int a, int b)
{
    return a % b;
}
