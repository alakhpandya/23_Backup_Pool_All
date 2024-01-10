// Create a 3x4 array and treat it like a matrix. Take 12 values from user & fill them in the matrix. Now print the matrix properly and ask user for a scaler to multiply the matrix with. Finally, print the resultant matrix on the screen.

// Declare two variables: row & col. Take array size for both the arrays to be 100x100. Now ask user how many rows and columns do they want to have in the first array. Write a program in such a way that it takes only that many inputs from user and then ask for the scaler and do the necessary changes in the remaining program to produce same output.

// Declare two variables: row & col. Take array size for both the arrays to be 100x100. Now ask user how many rows and columns do they want to have in the first array. Write a program in such a way that it takes only that many inputs from user and store them in the array. Store transpose of the array into another array and print both of them.

// Declare two variables: row & col. Take three arrays of size to be 100x100. Now ask user how many rows and columns do they want to have in the first array. Do the same with second array. Display if AxB is possible or not. If possible, ask user to enter numbers in both arrays one after the other and if not, print "The arrays are not compatible for matrix multiplication." and terminate the program.

// HW: Extend the above code so that the third array holds the values obtained by performing matrix multiplication on the first two arrays. But make sure this happens only when the arrays are compatible for matrix multiplication.

#include<stdio.h>

int main()
{
    int row, col, i, j;
    float a[100][100], b[100][100];
    printf("Number of rows: ");
    scanf("%d", &row);
    printf("Number of columns: ");
    scanf("%d", &col);
    for(i=0; i<row; i++){
        printf("Row-%d:\n", i);
        for(j=0; j<col; j++){
            printf("Element-%d: ", j);
            scanf("%f", &a[i][j]);
        }
    }
    // Printing the array
    printf("Original:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }


    // Transpose:
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            b[i][j] = a[j][i];
        }
    }

    // Printing the array
    printf("Transpose:\n");
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%.2f\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}