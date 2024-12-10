#include <stdio.h>

int reverse(int num) {
    int reversed = 0;
    
    while(num != 0) {
        int digit = num % 10;        // Get the last digit
        reversed = reversed * 10 + digit;  // Add digit to reversed number
        num = num / 10;              // Remove the last digit
    }
    
    return reversed;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reversed = reverse(num);
    printf("Reversed number: %d\n",reversed);
    
    return 0;
}
