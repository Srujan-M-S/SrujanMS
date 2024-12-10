#include<stdio.h>
int maxnumber()
int main()
{
    int x=0,y=0;
    printf("Enter the first number ");
    scanf("%d",&x);
    printf("Enter the second number ");
    scanf("%d",&y);
    printf("Max number is %d ",maxnumber(&x,&y));
    return 0;
}