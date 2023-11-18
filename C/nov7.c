// Write a program that takes an integer from user and prints its number of digits.
#include<stdio.h>

int main()
{
    int a, count=0;
    printf("a: ");
    scanf("%d", &a);

    // works only for positive integers & 0
    /*
    do{
        a = a/10;
        count++;
    }while(a > 0);
    */
    /*
    do{
        a = a/10;
        count++;
    // }while(a != 0);
    }while(a);
    */
    while(a){
        a = a/10;
        count++;
        // printf("%d\n",count);
    }
    // printf("No of digits = %d", count);
    return 0;
}
/*
What is True?
Any number other than 0
What is False?
0
What is -0.04
*/