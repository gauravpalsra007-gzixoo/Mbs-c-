
// 1. Write a program to enter two integers, two floating
// numbers and then perform all arithmetic operations
// on them.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter your a number: ");
    scanf("%d", &a);
    printf("Enter your b number: ");
    scanf("%d", &b);
    printf("Sum = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Division = %d\n", a / b);
    printf("Multiplication = %d\n", a * b);
    printf("Remainder = %d\n", a % b);
    return 0;
}

