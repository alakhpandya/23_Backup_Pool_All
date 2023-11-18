// Write a program that takes two integers from user and prints all the prime numbers between them (including both)

#include<stdio.h>
#include<math.h>

int main()
{
    long long int a, b, i, n, flag, sqrt;
    printf("Enter two integers:\n");
    printf("a: ");
    scanf("%lld", &a);
    printf("b: ");
    scanf("%lld", &b);
    for(n = a; n <= b; n++){
        // prime or not
        flag = 1;
        sqrt = pow(n, 0.5)+1;
        for(i = 2; i <= sqrt; i++){
            if (n % i == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1 && n != 1){
            printf("%lld\n", n);
        }
    }
    return 0;
}