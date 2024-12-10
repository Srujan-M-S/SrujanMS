#include<stdio.h>
void swapges(int *roomkey1,int *roomkey2)
{
    int temp=0;
    temp=*roomkey1;
    *roomkey1=*roomkey2;
    *roomkey2=temp;
}
int main()
{
    int g1=0,g2=0;
    printf("Enter the room number of Guest1 :\n");
    scanf("%d",&g1);
    printf("Enter the room number of Guest2 :\n");
    scanf("%d",&g2);
    printf("Before swapping of 2 guests %d  %d\n",g1,g2);
    swapges(&g1,&g2);
    printf("After swapping of 2 guests %d  %d ",g1,g2);
    return 0;
}