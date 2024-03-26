#include<stdio.h>
#include<string.h>

int main()
{
    // strings are nothing but character arrays

    // Ways to scan & print strings:
    /*
    char n1[9];
    int i;
    
    // printf("Enter Name: ");
    // for(i = 0; i < 6; i++){
    //     scanf(" %c", &n1[i]);
    // }
    // n1[i] = "\0";

    // printf("\n");
    // for(i = 0; i < 9; i++){
    //     printf("%c", n1[i]);
    // }

    // scanf("%s", &n1);

    printf("Enter i: ");
    scanf("%d", &i);
    printf("i = %d", i);
    printf("\nEnter Name: ");

    fflush(stdin);
    gets(n1);
    printf("Name: %s", n1);
    */

    // String functions
    /*
    char name[100], pwd[100], cpwd[100], surname[100], full_name[200], reversed[200];
    int i, len, match;
    printf("Enter name: ");
    gets(name);

    len = strlen(name);
    printf("Number of characters: %d", len);

    printf("\nEnter Password: ");
    gets(pwd);
    printf("Re-enter Password: ");
    gets(cpwd);

    match = strcmp(pwd, cpwd);
    // printf("Match = %d", match);
    if (match == 0){
        printf("Passwords matched!");
    }
    else{
        printf("Passwords did not match...");
    }
    // Self-study: How to hide password?
    
    printf("\nYour Surname: ");
    gets(surname);
    // Copy 'name' into full_name
    strcpy(full_name, name);

    // Add space after full_name
    strcat(full_name, " ");

    // Add surname after full_name
    strcat(full_name, surname);
    printf("Full name: %s", full_name);
    
    strcpy(reversed, full_name);
    strrev(reversed);       // reverses the original string!
    printf("\nReversed: %s", reversed);
    */
    return 0;
}