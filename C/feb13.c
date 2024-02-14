#include<stdio.h>
// Store height(cm-integer) & weight(kg-float) of 5 candidates.
/*
1. Premitive Data Types: int, char, float, double, long double, long int, long long double etc
2. Derived Data Types: Array
3. User defined data types: Structure
*/

/*
struct candidate{
    int height;
    float weight;
};
int main()
{
    struct candidate c1, c2;
    // c1.height = 170;
    // c1.weight = 66.5;
    printf("Enter height of c1: ");
    scanf("%d", &c1.height);
    printf("Enter weight of c1: ");
    scanf("%f", &c1.weight);
    printf("Enter height of c2: ");
    scanf("%d", &c2.height);
    printf("Enter weight of c2: ");
    scanf("%f", &c2.weight);
    printf("Height of c1: %d\n", c1.height);
    printf("Weight of c1: %.3f\n", c1.weight);
    printf("Height of c2: %d\n", c2.height);
    printf("Weight of c2: %.3f", c2.weight);
    return 0;
}
*/

/*
struct candidate{
    int height;
    float weight;
};
int main(){
    struct candidate c[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Enter details of candidate-%d:\n", i);
        printf("Height: ");
        scanf("%d", &c[i].height);
        printf("Weight: ");
        scanf("%f", &c[i].weight);
    }
    return 0;
}
*/

// 1. Create a structure that stores length of a wooden log in feet and inches (both int). Take length of two wooden logs from user in the main program and print them.
/*
Example:
Enter the length of wooden log-1:
feet: 4 / 4
inches: 10 / 6
Enter the length of wooden log-2:
feet: 5 / 5
inches: 6 / 3
Output:
Wooden log-1 is 4 feet 10 inches long.
Wooden log-2 is 5 feet 6 inches long.
Total length of both the logs is: 10 feet 4 inches
Total length of both the logs is: 9 feet 9 inches

*/

struct wood{
    int feet, inches;
// } w1, w2, w3;
} w[3];
int main(){
    // struct wood w[3];
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter the length of wooden log-1:\n");
        printf("feet: ");
        scanf("%d", &w[i].feet);
        printf("inches: ");
        scanf("%d", &w[i].inches);
    }
    w[2].feet = w[0].feet + w[1].feet;
    w[2].inches = w[0].inches + w[1].inches;
    if (w[2].inches > 12){
        w[2].feet++;
        w[2].inches -= 12;
    }
    printf("Wooden log-1 is %d feet %d inches long.\n", w[0].feet, w[0].inches);
    printf("Wooden log-2 is %d feet %d inches long.\n", w[1].feet, w[1].inches);
    printf("Total length of both the logs is: %d feet %d inches", w[2].feet, w[2].inches);
    return 0;
}

// HW:
/*
Create a structure that holds two properties of a complex number (real part and imaginary part - both integers). Write a program that takes two complex numbers from user, stores them in the structure and performs addition & subtraction on them and prints the final answers on the screen.
*/