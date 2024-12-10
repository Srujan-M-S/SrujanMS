#include <stdio.h>

int main() {
    int rows=1, i, j;
    int spc = rows + 4 - 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) 
    {
        
        for(j = spc; j>0; j--)
         {
            printf("_");
             spc--;
        }
        for(j = 1; j <= 1; j++)
        {
            printf("*");
        }
        printf("\n");
       
    }
    
    return 0;
}