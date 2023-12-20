#include<stdio.h>

/*
Use arrays & solve the following questions:
1. Take marks of 5 subjects from the user and print them all.

int main()
{
    int marks[5], i;

    for(i = 0; i < 5; i++){
        printf("Sub-%d: ", i+1);
        scanf("%d", &marks[i]);
    }
    
    // printf("marks-1: ");
    // scanf("%d", &marks[0]);
    // printf("marks-2: ");
    // scanf("%d", &marks[1]);
    // printf("marks-3: ");
    // scanf("%d", &marks[2]);
    // printf("marks-4: ");
    // scanf("%d", &marks[3]);
    // printf("marks-5: ");
    // scanf("%d", &marks[4]);

    // printf("Sub-1: %d", marks[0]);
    // printf("Sub-2: %d", marks[1]);
    // printf("Sub-3: %d", marks[2]);
    // printf("Sub-4: %d", marks[3]);
    // printf("Sub-5: %d", marks[4]);

    for(i = 0; i < 5; i++){
        printf("Sub-%d: %d\n", i+1, marks[i]);
    }
    return 0;
}
*/
/*
2. Take 5 integers from user and store them in an array. Print them in reverse order.

int main(){
    int a[5], i;
    for(i = 0; i < 5; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Reversed array: ");
    for(i = 0; i < 5; i++){
        printf("%d\t", a[4-i]);    // i = 0, 1, 2, 3, 4
    }
    return 0;
}
*/

/*
Take 5 integers from user and store them in an array. Print their total.

int main(){
    int a[5], i, can=0;
    for(i = 0; i < 5; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    can = a[0];
    // can = can + a[1];
    // can = can + a[2];
    // can = can + a[3];
    // can = can + a[4];
    for(i = 1; i < 5; i++){
        can = can + a[i];
    }
    printf("Sum = %d", can);
    return 0;
}
*/

/*
Take marks of 5 subjects of a student for the first mid-sem exam and store them in an array. Next, take marks of the same five subjects of the same student but for the second mid-sem exam and store them in another array. Calculate the total marks of the student for each subject & store them in third array.
Print the result in a tabular format as shown below:

test-1  test-2  total
10      20      30
15      10      25
18      12      30
13      13      26
15      17      32
*/

int main()
{
    int t1[5], t2[5], i, total[5];
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++){
        printf("Sub-%d:\n", i+1);
        printf("Test-1: ");
        scanf("%d", &t1[i]);
        printf("Test-2: ");
        scanf("%d", &t2[i]);

        total[i] = t1[i] + t2[i];
    }

    printf("\nTest-1\tTest-2\tTotal\n");
    for(i = 0; i < 5; i++){
        printf("%d\t%d\t%d\n", t1[i], t2[i], total[i]);
    }
    return 0;
}