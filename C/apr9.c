/*
#include<stdio.h>

int main()
{
    int a;
    char s[101], t[100] = "All the best!";
    FILE *fp;
    fp = fopen("f2.txt", "a");
    // checking the position of the cursor

    // printf("Current position of the cursor: %d", ftell(fp));
    // fgets(s, 100, fp);
    // printf("\nData in the file: %s", s);
    // printf("\nCurrent position of the cursor: %d", ftell(fp));  // 18
    // fseek(fp, 10, SEEK_SET);
    // printf("\nCurrent position of the cursor: %d", ftell(fp));  // 10
    // fgets(s, 100, fp);
    // printf("\nData in the file: %s", s);
    // printf("\nCurrent position of the cursor: %d", ftell(fp));

    fputs(t, fp);
    fclose(fp);
    return 0;
}
*/
// Ask 20 integers from user and store all the even numbers in a file named 'even', all the odd numbers in a file named 'odd' and all the prime numbers in a file named 'prime'