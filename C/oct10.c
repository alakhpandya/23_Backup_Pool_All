#include<stdio.h>
/*
int main()
{
    int i;
    // for(i = 1; i <= 5; i++){
    // for(i = 0; i < 5; i++){
        // printf("%d. Hello there!\n", i+1);
    // for(i = 0; i < 15; i = i + 2){
        // printf("%d. Hello there!\n", (i/2)+1);
    // for(i = -10; i <= 20; i = i + 2){
    //     printf("%d. Hello there!\n", i);
    for(i = 1; i <= 1000; i = i * 2){
        printf("%d. Hello there!\n", i);
    }
    // printf("%d", i);
    return 0;
}
*/

/*
1. Write a program that asks an integer from user & prints all the positive even numbers till that integer (including it).
*/

int main(){
    int n, i;

    printf("n: ");
    scanf("%d", &n);

/*
    if (n % 2 == 0){
        printf("Even.");
    }
    else{
        printf("Odd.");
    }
*/

/*
    for(i = 2; i <= n; i = i + 2){
        printf("%d\n", i);
    }
*/

/*
    for(i = 1; i <= n; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
*/

    if (n % 2){
        printf("foo");
    }
    return 0;
}