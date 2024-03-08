#include <stdio.h>
// Write a program to print the address of the pointer to a variable whose value is input from the user.
// int main()
// {
//     int a, *pa;
//     pa = &a;
//     printf("a: ");
//     scanf("%d", &a);
//     printf("Address of a: %p\n", pa);
//     printf("Address of pa: %p\n", &pa);
//     return 0;
// }

// Pointer arithmetic
/*
int main(){
    double a[5];
    double *pa;

    pa = &a[0];
    printf("Address of a[0]: %p\n", &a[0]);
    printf("Address of a[0] through pointer: %p\n", pa);

    pa++;
    printf("\nAddress of a[1]: %p\n", &a[1]);
    printf("Address of a[1] through pointer: %p\n", pa);

    pa++;
    printf("\nAddress of a[2]: %p\n", &a[2]);
    printf("Address of a[2] through pointer: %p\n", pa);

    pa++;
    printf("\nAddress of a[3]: %p\n", &a[3]);
    printf("Address of a[3] through pointer: %p\n", pa);

    pa++;
    printf("\nAddress of a[4]: %p\n", &a[4]);
    printf("Address of a[4] through pointer: %p\n", pa);

    return 0;
}
*/

// Pointer to function
// Write a function that takes array input from user.

//
#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, b[3][3], add[3][3], row=3, col=3, i, j;

    // printf("enter the no. of rows:-");
    // scanf("%d", &row);
    // printf("enter the no. of columns:-");
    // scanf("%d", &col);
    // a = scanArray();

    // printf("Enter the first array:\n");
    // for (i = 0; i < row; i++)
    // {
    //     printf("Row-%d\n", i+1);
    //     for (j = 0; j < col; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    // printArray(a);
    printf("\n------------------------>\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter the element of array of a[%d][%d]:-", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n------------------------>\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("addition of two matrix is:-\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}

