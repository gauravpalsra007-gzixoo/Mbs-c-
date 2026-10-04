
// // #include <stdio.h>

// // int main()
// // {
// //     int n;
// //     int factorial = 1;

// //     printf("Enter your number: ");
// //     scanf("%d", &n);

// //     for (int i = 1; i <= n; ++i)
// //     {
// //         factorial = factorial * i;
// //     }

// //     printf("Your factorial is: %d", factorial);

// //     return 0;
// // }


// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("enter your number :");
// //     scanf("%d",&n);
// //     int i=1;
// //     int factorial=1;
// //     while (i<=n)
// //     {
// //        factorial =factorial * i;
// //        i++;
// //     }
// //     printf("%d",factorial);
// //     return 0;
// // }



// // #include<stdio.h>
// // int main(){
// //     for (int i = 1; i <=5; i++)
// //     {
// //         for (int j = 1; j <= 5; j++)
// //         {
// //             printf("%d",j);
            
// //         }
// //         printf("\n");
        
// //     }
    
// // }


// // 1
// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     if (age>=18)
//     {
//         printf(" you are eligible for vote");
//     }else{
//         printf("your are not eleigible for vote");
//     }
    
// }



// // 2(ternary)
// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     age>=18?printf("your are eligible for vote"):printf("yor are not eligible ");

// }


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter your number :");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("a is largest number :)");
//     }else if(b>a && b>c){
//         printf("b is the greatest number :( )");
//     }else{
//         printf("c is the greatest number T_T");
//     }
// }


#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        reverse = reverse*10+digit;
        num = num / 10;
    }

    if (reverse == original) {
        printf("Number is palindrone number\n");
    } else {
        printf("Number is not palindrone\n");
    }

    return 0;
}