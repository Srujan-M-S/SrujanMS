#include<stdio.h>
int swap(int,int);
int main()
{
    int n1,n2;
    printf("Enter the first number :\n");
    scanf("%d",&n1);
    printf("Enter the second number :\n");
    scanf("%d",&n2);
    printf("Before swapping the two numbers are %d and %d \n",a,b);
    swap(&a,&b);
    printf("\nAfter swapping the two numbers are %d and %d \n",a, b);
    return 0;
}
int swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    return 0;

}