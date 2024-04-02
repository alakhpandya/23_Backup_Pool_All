/*
Modes of file handling:
r : Read Mode - Allows the file to be read. Writing into the file is not allowed. 

w : Write Mode - Allows the file to be written. Reading from the file is not allowed. Creates the file if it does not exists but if it exists, it will clear the entire content of the file.

a : Append Mode - Allows the file to be written. Reading from the file is not allowed. Creates the file if it does not exists and it will not erase the content if it exists. Writing will take place at the end of the file.

r+ : Read Plus - Allows reading & writing both. Does not create new file, does not erase the content of existing file.

w+ : Write Plus - Allows reading & writing both. It creates new file if it does not exist, erases the content of existing file.

a+ : Append Plus - Allows reading & writing both. It creates new file if it does not exist and does not erase the content of existing file. Writing will take place at the end of the file.
*/
/*
#include<stdio.h>

int main()
{
    int n[6], i;
    char s[2][50];
    FILE *fp;

    fp = fopen("file1.txt", "r");
    fscanf(fp, "%s %s %d", &s[0], &s[1], &n[0]);

    printf("First two Members: %s %s", s[0], s[1]);

    for ( i = 1; i < 6; i++)
    {
        fscanf(fp, "%d", &n[i]);
    }
    
    printf("\nOther members: ");
    for ( i = 0; i < 6; i++)
    {
        printf("%d, ", n[i]);
    }
    
    fclose(fp);
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int a[5], i;
    char s[50] = "Hello Royal!", t[50] = "How are you?";

    FILE *fp;
    fp = fopen("file1.txt", "r");
    
    // printf("Enter 5 integers:\n");
    // for ( i = 0; i < 5; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // fprintf(fp, "%d", a[0]);
    

    // fputs(s, fp);
    // fputs("\n", fp);
    // fputs(t, fp);
    if (fp == NULL){
        printf("File does not exist.");
    }
    else{
        fscanf(fp, "%d", &i);
        printf("First value: %d", i);
    }
    fclose(fp);
    return 0;
}
*/

#include<stdio.h>

int main()
{
    char s1[100], ch;
    FILE *f2;
    f2 = fopen("f2.txt", "r");
    // fgets(s1, 100, f2);

    // ch = fgetc(f2);
    while((ch = fgetc(f2)) != EOF){
        printf("%c", ch);
        // ch = fgetc(f2);
    }

    printf("\nFile ended.");
    fclose(f2);

    // printf("Your string is: %s", s1);
    return 0;
}

/*
Write a program that asks file name & mode from the user (assume that the user will enter full file name with extension and valid mode)
Create a file pointer that opens that file in the said mode. If file is present in the same folder then do the task other wise print an error message that the file does not exist.
*/