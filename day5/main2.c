#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements to be present in an array :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements into the array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
     printf("The array [");
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        {
            printf("%d ,",a[i]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    printf("]");
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }

    }    
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("The maximum element is %d\n",max);
    printf("The minimum element is %d",min);
    return 0;
}