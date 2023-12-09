/*
Take marks of 5 students from user, store them in seperate variables (a, b, c, d & e) then ask user whose marks do they want to see and print marks of only that student.

Example execution:
Enter marks of five students:
10
20
30
40
50
Whose marks do you want to see?
Enter serial no: 3

Expected Output:
30
*/

/*
Take salaries of 500 employees from user then ask user whose salary do they want to see and print salary of only that employee.
*/

// Arrays
#include<stdio.h>

int main()
{
    int m[5], ch, i;
    printf("Enter 5 marks:\n");
    for(i = 0; i < 5; i++){     // i = 0, 1, 2, 3, 4
        scanf("%d", &m[i]);
        // scanf("%d", &m[1]);
        // scanf("%d", &m[2]);
        // scanf("%d", &m[3]);
        // scanf("%d", &m[4]);
    }

    printf("Enter sr no: ");
    scanf("%d", &ch);

    printf("Marks: %d", m[ch]);
    return 0;
}