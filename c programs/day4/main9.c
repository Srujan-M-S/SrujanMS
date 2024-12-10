#include<stdio.h>
void transamt(int *acbl1,int *acbl2,int amt)
{
    *acbl1=(*acbl1)-amt;
    *acbl2=*acbl2+amt;
    
}
int main()
{
    int bl1=0,bl2=0,amt;
    printf("Enter the balance of customer 1 :\n");
    scanf("%d",&bl1);
    printf("Enter the balance of customer 2 :\n");
    scanf("%d",&bl2);
    printf("Enter the amount to be transfered  \n");
    scanf("%d",&amt);
    printf("Before transaction  %d  %d\n",bl1,bl2);
    transamt(&bl1,&bl2,amt);
    printf("After transaction  %d  %d ",bl1,bl2);
    return 0;
}