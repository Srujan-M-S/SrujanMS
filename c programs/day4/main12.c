#include<stdio.h>
int main()
{
    int a[5];
    int sum=0;
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
    for(int j=0;j<5;j++)
    {
      sum=sum+a[j];  
    }
    printf("\nThe sum of the elements in the array is  %d ",sum);
    return 0;
}    