// 7. Write a program to check whether a number is an
// Armstrong number or not



#include <stdio.h>
int main() {
    int n, original, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    if (sum == original) {
        printf("%d is  Armstrong number\n", original);
    } else {
        printf("%d is not  Armstrong number\n", original);
    }
    return 0;
}
