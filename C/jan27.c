/*
1. Write a function that computes the area of a circle whose radius is given in its argument. In a restaurant a customer orders a 12" pizza & the restuarant provides two 6" pizzas as the bigger bread was not available.Write the main program that varifies whether the customer is justified or not for the money he paid.

2. Write a function to calculate power of a number raised to other. E.g.- a^b. Do not use any built-in function to calculate power.

3. Write a function to print all the factors of a number

4. Write a function that prints whether the integer given in its argument is prime or not.
*/
#include<stdio.h>
int power(int base, int pow){
    int i, ans = 1;
    for(i = 0; i < pow; i++){
        ans = ans * base;
    }
    return ans;
}
void factors(int a){    // a = 15
    int i;
    for(i = 1; i < a; i++){
        if (a % i == 0){
            printf("%d, ", i);
        }
    }
    printf("%d", a);
}
int main()
{
    /*
    int base, pow, ans;
    printf("Base: ");
    scanf("%d", &base);
    printf("Power: ");
    scanf("%d", &pow);
    ans = power(base, pow);
    printf("%d^%d = %d", base, pow, ans);
    */
    int x;
    printf("x: ");
    scanf("%d", &x);
    factors(x);
    return 0;
}
