#include<stdio.h>

int main()
{
    // File handling
    /*
    int a;
    FILE *f1;
    // printf("a: ");
    // scanf("%d", &a);
    // printf("a = %d", a);

    f1 = fopen("file1.txt", "r");
    fscanf(f1, "%d", &a);
    printf("a = %d", a);
    */

    int marks[6], i, a;
    FILE *f1;

    // f1 = fopen("D:\\Royal\\temp.txt", "r");
    f1 = fopen("D:\\Royal\\C Programming\\trial.txt", "r");
    fscanf(f1, "%d", &a);
    printf("a = %d", a);
    fclose(f1);
    
    return 0;
}