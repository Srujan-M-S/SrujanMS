#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;    // Store value at address 'a' in temp
    *a = *b;         // Put value at address 'b' into address 'a'
    *b = temp;       // Put temp value into address 'b'
}
int main() {
    int num1, num2;
    // Input the numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Display original numbers
    printf("Before swapping: %d and %d\n", num1, num2);
    // Call swap function with addresses of num1 and num2
    swap(&num1, &num2);
    // Display swapped numbers
    printf("After swapping: %d and %d\n", num1, num2);
    return 0;
}
