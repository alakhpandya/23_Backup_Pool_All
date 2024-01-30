#include<stdio.h>

float avg(float x, float y){
    float average;
    average = (x + y)/2;
    printf("Average of %.2f and %.2f is %.4f\n", x, y, average);
    return average;
}

int main()
{
    float a, b, c, d, final_answer;
    printf("a: ");
    scanf("%f", &a);    // a = 10
    printf("b: ");
    scanf("%f", &b);    // b = 20
    // avg(10, 20);
    // avg(15, 30);
    // avg(a, b);          // 15

    printf("c: ");
    scanf("%f", &c);    // 30
    printf("d: ");
    scanf("%f", &d);    // 40
    // avg(c, d);          // 35

    final_answer = avg(a, b) + avg(c, d);
    printf("Final answer = %.4f", final_answer);
    return 0;
}

/*
Take 5 integers from user and print sum of their factorials using the factorial function you just created. 
*/