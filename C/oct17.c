#include<stdio.h>

int main()
{
    // Ask a year from user and print whether it's a leap year or not.
    // 2013 -> No
    // 2040 -> Yes
    // 2000 -> Yes
    // 2100 -> No
    /*
    Leap year: divisible by 4 (only for non-century years)
    For century year: they must be divisible by 400 to be leap year

    check if it is century year or not:
        yes -> check if it is divisible by 100
            yes -> Check if it is divisible by 400
                Yes -> Leap year
                no -> Not a leap year
        No -> Old program (check if divisible by 4)
            yes -> Leap year
            no -> Not a leap year
    */
    /*
    int year;
    printf("Year: ");
    scanf("%d", &year);
    if(year % 100 == 0){
        if(year % 400 == 0){
            printf("Leap year");
        }
        else{
            printf("Not a leap year");
        }
    }
    else{
        if(year % 4 == 0){
            printf("Leap year");
        }
        else{
            printf("Not a leap year");
        }
    }
    */
    /*
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i = i +5){
        printf("%d\n", i);
    }
    */

    int first, second, i;
    printf("first number: ");
    scanf("%d", &first);
    printf("second number: ");
    scanf("%d", &second);
    for(i = first; i <= second; i++){
        if(i % 5 == 0 && i % 3 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
/*
1. Write a program that takes an integer from user and prints all the integers which are divisible by 5 starting from 0 till that integer (including both). Do not use 'if' statement in this program.
2. Write a program that takes two integers from user and prints all the integers which are divisible by 5 and 3 both starting from first integer till the second integer (including both).
3. Write a program that takes an integer from user and prints all its factors.
4. Write a program that takes an integer from user and prints number of digits that number has. 7832 -> 4
*/