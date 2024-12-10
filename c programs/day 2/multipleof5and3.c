#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%3==0&&a%5==0)
        printf("The number is multiple of 3 and 5");
    else
        printf("The number is not multiple of 3 and 5");    
    return 0;
    
}