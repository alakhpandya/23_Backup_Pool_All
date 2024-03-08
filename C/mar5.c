#include<stdio.h>

/*
int main()
{
    int a[5], *pa, i;
    pa = &a[0];
    printf("Enter 5 integers to store in array:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", pa);
        pa++;
    }

    printf("Array a: ");
    for(i = 0; i < 5; i++){
        printf("%d, ", a[i]);
    }

    printf("\nArray a through pointer: ");
    pa = &a[0];
    for(i = 0; i < 5; i++){
        printf("%d, ", *pa);
        pa++;
    }
    return 0;
}
*/
/*

int a[5];

a[0] : 100, 101, 102, 103
a[1] : 104, 105, 106, 107
a[2] : 108
a[3]
a[4]

*/

void scanArray(int *ptr){
    int i, j;
    for(i = 0; i < 3; i++){
        printf("Row %d:\n", i+1);
        for(j = 0; j < 3; j++){
            scanf("%d", ptr);
            ptr++;
        }
    }
}
void printArray(int *ptr){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", *ptr);
            ptr++;
        }
        printf("\n");
    }
}
void addArray(int *a1,int *a2,int *ans){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            *ans = *a1 + *a2;
            a1++;
            a2++;
            ans++;
        }
    }
}

int main(){
    int a[3][3], b[3][3], c[3][3];
    
    printf("Enter array a:\n");
    scanArray(&a[0][0]);
    printf("Enter array b:\n");
    scanArray(&b[0][0]);

    addArray(&a[0][0], &b[0][0], &c[0][0]);

    printf("\na + b:\n");
    printArray(&c[0][0]);
    return 0;
}