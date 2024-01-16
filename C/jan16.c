#include<stdio.h>

int main()
{
    float a[100][100], b[100][100], m[100][100];
    int i, j, k, ra, ca, rb, cb, sum;

    // Checking Compatibility for Multiplication
    printf("Rows in matrix A: ");
    scanf("%d", &ra);
    printf("Columns in matrix A: ");
    scanf("%d", &ca);
    printf("Rows in matrix B: ");
    scanf("%d", &rb);
    printf("Columns in matrix B: ");
    scanf("%d", &cb);
    if(ca != rb){
        printf("Not compatible.");
        return 0;
    }

    // Scanning both the arrays
    printf("Enter %d elements for matrix A:\n", ra*ca);
    for(i = 0; i < ra; i++){
        printf("row-%d:\n", i);
        for(j = 0; j < ca; j++){
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter %d elements for matrix B:\n", rb*cb);
    for(i = 0; i < rb; i++){
        printf("row-%d:\n", i);
        for(j = 0; j < cb; j++){
            scanf("%f", &b[i][j]);
        }
    }

    // Multiply both the matrices
    for(i = 0; i < ra; i++){
        for(k = 0; k < cb; k++){
            sum = 0;
            for(j = 0; j < ca; j++){
                sum = sum + a[i][j]*b[j][k];
            }
            m[i][k] = sum;
        }
    }


    // Printing both the arrays (for testing):
    /*
    printf("Matrix A:\n");
    for(i = 0; i < ra; i++){
        for(j = 0; j < ca; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i = 0; i < rb; i++){
        for(j = 0; j < cb; j++){
            printf("%.2f\t", b[i][j]);
        }
        printf("\n");
    }
    */

    printf("Matrix Multiplication:\n");
    for(i = 0; i < ra; i++){
        for(j = 0; j < cb; j++){
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}