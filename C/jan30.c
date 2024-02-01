#include<stdio.h>
/*
void primeCheck(int n){ // 5
    int i;
    for(i = 2; i < n; i++){
        if (n % i == 0){
            printf("Not Prime.");
            return;
        }
    }
    printf("Prime.");
}
int main()
{
    int a, i, prime=1;
    printf("Number: ");
    scanf("%d", &a);
    
    for(i = 2; i < a; i++){
        if (a % i == 0){
            printf("Not Prime.");
            prime=0;
            break;
        }
    }
    if(prime == 1){
        printf("Prime.");
    }
    
    primeCheck(a);
    printf("\nThanks for using our program!");
    return 0;
}
*/
// Ask two integers from user and print all the prime numbers between them (including both) using this function.

/*
int primeCheck(int n){
    int i;
    for(i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b, i;
    printf("Number 1: ");   
    scanf("%d", &a);        // 10
    printf("Number 2: ");
    scanf("%d", &b);        // 20
    for(i = a; i <= b; i++){    // i = 10, 11, 12, 13....., 20
        if (primeCheck(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
*/
/*
    Write a function that counts and returns number of digits of the integer given in its argument.
*/
#include<math.h>

int digitCounter(int n){
    int digit=0, i;
    while (n > 0){
        n = n / 10;     // 152/10 = 15, 15/10 = 1, 1/10 = 0
        digit++;
    }
    return digit;
}
int armCheck(int n){    // n is going to be a 3 digit number.
    // Write a program here that makes this function returning 0 or 1 based on whether n is an armstrong number or not.
    int m, digit, sum=0, power;
    m = n;
    power = digitCounter(n);
    while (m > 0){
        digit = m % 10;
        sum = sum + pow(digit, power);
        m = m / 10;
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int a;
    printf("Number: ");
    scanf("%d", &a);

    printf("%d", armCheck(a));
    /* 
    1^3 = 1
    5^3 = 125
    3^3 = 27
    ----------
          153
    */
    return 0;
}