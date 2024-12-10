#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: %d and %d\n", a, b);
}

int main() {
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    
    printf("Before swapping: %d and %d\n", a, b);
    swap(a, b);
    printf("After swapping in main: %d and %d\n", a, b);
    
    return 0;
}
