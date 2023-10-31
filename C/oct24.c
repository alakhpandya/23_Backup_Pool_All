/*
1. Take an integer from user and print all its factors.
2. Write a program that takes an integer from user and prints whether it is a perfect number or not. 
    Hint: A positive integer is a perfect number if sum of all of its factors (excluding itself) equals to that number.
    Examples of non-perfect numbers:
        12: 1, 2, 3, 4, 6
        30: 1, 2, 3, 5, 6, 10, 15
    Example of perfect numbers:
        6: 1, 2, 3
        28: 1, 2, 4, 7, 14

3. Write a program that asks an integer from user and prints whether it is a prime number or not.
*/
#include<stdio.h>

int main()
{
    int n, i, flag=1; /* if flag = 0 (No) that means the number if flag = 1 (yes) that means no is prime */
    printf("n: ");
    scanf("%d", &n);    // n = 23
    for(i = 2; i < n; i++){
        if (n % i == 0){
            printf("Not prime.");
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        printf("Prime.");
    }
    return 0;
}