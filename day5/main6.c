#include<stdio.h>
int main()
{
  int length=0;
  char str[100];
  int alpcount=0;
  int digcount=0;
  int symcount=0;
  printf("Enter the string :");
  fgets(str,sizeof str,stdin);
  while(str[length]!='\0')
  {
    length++;
  }  
  for(int i=0;i<length-1;i++)
  {
    if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
    {
        alpcount++;
    }
    else if((str[i]>='0')&&(str[i]<='9'))
    {
        digcount++;
    }
    else
    {
        symcount++;
    }
  }
  printf("Number of aiphabets is %d\n ",alpcount);
  printf("Number of digits is %d \n",digcount);
  printf("Number of special charecters is %d \n",symcount);
  return 0;
}