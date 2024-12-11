#include<stdio.h>
int main()
{
    int n,m,i=1;
    printf("Enter an odd number that you want to print from");
    scanf("%d",&n);
    printf("Enter an odd number that you want to print upto");
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(i%2!=0)
        {
          printf("%d \n",i);
        }
    }
    return 0;
}