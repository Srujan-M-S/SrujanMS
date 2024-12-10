#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(0<n<13)
    {
        printf("The entered month number is valid");
    }
    else 
    {
        printf("The entered month number is invalid");
    }
    return 0;
}    