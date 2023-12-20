/*
Ask 10 integers from user and store them in an array. Now create an another array which has elements of first array in reverse order. Print both the arrays.
*/
#include<stdio.h>

/*
int main()
{
    int a[10], b[10], i, j=0;
    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(i=9; i >= 0; i--){
        b[j] = a[i];
        j++;
    }
    printf("Array a:\n");
    for(i=0; i<9; i++){
        printf("%d, ", a[i]);
    }
    printf("%d", a[9]);

    printf("\nArray b:\n");
    for(i=0; i<9; i++){
        printf("%d, ", b[i]);
    }
    printf("%d", b[9]);
    return 0;
}

// Array a: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// Array b: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
*/

/*
Ask 10 integers from user and store them in an array. Reverse that array itself without taking another array.
input: 1,2,3,4,5,6,7,8,9,10
array a before reversal: 1,2,3,4,5,6,7,8,9,10
array a after reversal: 10,9,8,7,6,5,4,3,2,1
*/