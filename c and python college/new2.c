// 4. Write a python program to find factorial of a
// numbe

#include <stdio.h>
int main() {
    int n;
    int factorial = 1;
    printf("Enter your number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("Factorial of your number is = %d\n", factorial);
    return 0;
}

