/*
2. Inc/Dec Operators:
    Pre:
        ++a, --a
    Post:
        a++, a--

3. Relational Operators/Comparision operators/Conditional Operators/Conditions: These always return 0 or 1
    <, >, <=, >=, ==, !=
    a == 10
    a < 10
    Yes/True -> 1
    No/False -> 0

4. Logical Operators: Used to combine conditions
    &&, ||, !
*/

/*
#include<stdio.h>

int main()
{
    int a = 10, b = 10, c = 30;
    // printf("a = %d\n", a++);
    // printf("a = %d\n", a);

    // c = b + a++;
    // c = b + ++a;
    // printf("a = %d\n", a);
    // printf("sum = %d", c);

    // printf("%d\n", a > b);
    // printf("%d\n", a < b);

    // a < b < c = a < b AND b < c;
    // a < b < c = a < b OR b < c;

    // printf("%d\n", a < b && b < c);
    // printf("%d\n", !(a < b));

    printf("%d\n", a <= b);
    return 0;
}
*/

// Decision Making: if-else

#include<stdio.h>

int main()
{
    /*
    int marks;
    printf("Marks: ");
    scanf("%d", &marks);
// marks = 95
    
    if (marks >= 90){
        printf("Awesome!\n");
    }
    if(marks >= 70){
        print("Wow!\n");
    }
    if(marks < 70){
        printf("Never mind...\n");
    }

    printf("Proceed to the next step...");
    return 0;
    */
    // Ask 3 integers from user and print the largest amongst them.
    int a, b, c;

    printf("Enter a, b & c:");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c){
        printf("%d", a);
    }
    else{
        if (a <= c && b <= c){
            printf("%d\n", c);
        }
        if (b <= a && c <= a){
            printf("%d\n", a);
        }
        if (a <= b && c <= b){
            printf("%d\n", b);
        }
    }
    return 0;
}