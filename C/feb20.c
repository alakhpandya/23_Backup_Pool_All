// #include<stdio.h>
/*
Create a structure that holds two properties of a complex number (real part and imaginary part - both integers). Write a program that takes two complex numbers from user, stores them in the structure and performs addition & subtraction on them and prints the final answers on the screen.
*/

/*
struct complex{
    int real, img;
}c1, c3, c3;
int main()
{
    struct complex c[3];
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter the complex number-%d:\n", i+1);
        printf("Real part: ");
        scanf("%d", &c[i].real);
        printf("Imaginary part: ");
        scanf("%d", &c[i].img);
    }
    c[2].real = c[0].real + c[1].real;
    c[2].img = c[0].img + c[1].img;
    printf("\nSum = %di + %d", c[2].img, c[2].real);
    return 0;
}

// (a + ib) * (p + iq) = 
*/

// Pointers
#include<stdio.h>

/*
int main()
{
    int a = 25, *pa, b;
    pa = &a;        // & = address operator
    printf("Address of a: %d\n", &a);
    printf("Address of a: %x\n", &a);
    printf("Address of a: %p\n", &a);
    printf("Data in a: %d\n", a);
    printf("Address of a: %p\n", pa);
    // &a = 55;
    *pa = 55;   // * = refferance operator
    b = 103;
    printf("Data in a: %d\n", a);
    return 0;
}
*/

int main(){
    int a, b, ans, *pa, *pb, *pc;
    pa = &a;
    pb = &b;
    pc = &ans;
    printf("a: ");
    scanf("%d", pa);
    printf("b: ");
    scanf("%d", pb);
    // ans = a + b;
    // printf("sum = %d\n", *pc);
    // printing value of a through pointer:
    // printf("a = %d\n", *pa);

    // 13 + 12 = 25
    *pc = *pa + *pb;
    printf("%d + %d = %d", *pa, *pb, *pc);
    return 0;
}


// Structure Examples
/*
1. Write a program to store and print the roll no., name , age and marks of a student using structures.

2. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

3. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. given by user.

4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

5. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student in a tabular form.
eg:
RollNo  Chem    Maths   Phy     Percentage
1       75      85      50      70

6. Write a program to add, subtract, multiply and divide two complex numbers using structures to functions according to choice of the user.
Test Cases:
(6 + 4i) + (8 - 2i) = 14 + 2i
(10 + 3i) - (7 - 4i) = 3 + 7i
(2 + 3i) * (1 + 5i) = -13 + 13i
(3 + 4i) / (8 - 2i) = 0.235 + 0.559i



7. Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
1 - Print the names of all the students having age 14.
2 - Also print the names of all the students having even roll no.

8. Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
1 - Print the names of all the customers having balance less than $200.
2 - Add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

9. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year (all integers) to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/


// Pointer Examples:
/*
1.Write a program to print the address of a variable whose value is input from user.

2. Write a program to print a number which is entered from keyboard using pointer.

3. Write a program to print the address of the pointer to a variable whose value is input from user.
*/