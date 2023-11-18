/*
Ask two integers from user and print all the Armstrong numbers between them (including both)
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, n, digit, cube, sum_of_cubes, backup;
    printf("a: ");
    scanf("%d", &a);    // a = 100
    printf("b: ");
    scanf("%d", &b);    // b = 1000
    for (n = a; n <= b; n++){
        sum_of_cubes=0;
        backup = n;
        while(n != 0){
            digit = n % 10;
            cube = pow(digit, 3);
            sum_of_cubes = sum_of_cubes + cube;
            n = n / 10;
        }
        if (sum_of_cubes == backup){
            printf("%d\n", backup);
        }
    }
    return 0;
}