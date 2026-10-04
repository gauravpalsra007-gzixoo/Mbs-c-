
// 2. Write a program to calculate Simple Interest for
// values of p, r, t entered by the user

#include <stdio.h>
int main() {
    float p, r, t, si;
    printf("Enter your principal: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter your time: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %f\n", si);
    return 0;
}

