#include<stdio.h>
int main()
{
    int n;
    int count=1;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    char a[n];
    int length=0;
    printf("Enter the %d elements into the array\n",n);
    fgets(a,sizeof a,stdin);
    while(a[length] != '\0')
    {
        length++;
    }
    for(int i=0;i<=length-1;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("Length of the string is : %d \n\n",length-1);
    return 0;
}    