#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    char a[n];
    printf("Enter the %d elements into the array\n",n);
    fgets(a, sizeof a, stdin);
    printf("%d",sizeof(a));
    printf("The String is :");
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    for(int i=n;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}