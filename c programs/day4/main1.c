#include<stdio.h>
int countdig(int);
int main()
{
    int n,co,cosum;
    printf("Enter the number  :");
    scanf("%d",&n);
    co=countdig(n);
    printf(" The count of %d is %d ",n,co);
    return 0;
}
int countdig(int co)
{
    int count=0;
    if(n!=0)
    { 
    count++;
    countdig(n/10)
    }

}