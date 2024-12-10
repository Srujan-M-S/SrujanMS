#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the 5 elements into the array \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    } 
    
    printf("The actual array [");
    for(int i=0;i<5;i++)
    {
        if(i<4)
        {
            printf("%d ,",a[i]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    printf("]");
    printf("\nThe reversed array [");
    for(int i=4;i>=0;i--)
    {
        if(i>0)
        {
            printf("%d ,",a[i]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    printf("]");
    return 0;
}
