// Requirements:
/*
1. Create Account
2. User login & logout
3. Deposit money, withdraw money, check balance
*/

#include<stdio.h>

int main()
{
    int amount, i=0, cur, j, k;
    char username[100][100], pwd[100][100], balance[100][100], operation;
    char db[100][100];
    FILE *data;
    

    data = fopen("database.csv", "r");
    while (fgetc(data) != EOF){
        cur = ftell(data);
        cur--;
        fseek(data, cur, SEEK_SET);
        fgets(db[i], 99, data);
        i++;
    }
    fclose(data);

    for(i = 0; i < 3; i++){
        // printf("User-%d:\n", i);
        // printf("%s\n", db[i]);
        j = 0;
        while(db[i][j] != ','){
            username[i][j] = db[i][j];
            j++;
        }
        k = 0;
        j++;
        while(db[i][j] != ','){
            pwd[i][k] = db[i][j];
            j++;
            k++;
        }
        k = 0;
        j++;
        while(db[i][j] != '\n'){
            balance[i][k] = db[i][j];
            j++;
            k++;
        }
    }

    for ( i = 0; i < 3; i++)
    {
        printf("User-%d: %s", i, username[i]);
        printf("pwd-%d: %s", i, pwd[i]);
        printf("Balance-%d: %s", i, balance[i]);
    }
    
    return 0;
}