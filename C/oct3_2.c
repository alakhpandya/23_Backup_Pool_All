// Loops: 
/*
1. We use loops if and only if we want to execute a piece of code multiple times in a row.
2. We put those and only those statements inside the loop which we want to execute multiple times.
*/
#include<stdio.h>

int main()
{
    // while loop
    int n, count = 1;
    // int sr = 1;
    printf("n = ");
    scanf("%d", &n);
    /*
    // while (count < 500){
    while (count <= n){
        // printf("%d) Hello Maharshi!\n", sr);
        // sr++;
        printf("%d) Hello Maharshi!\n", count);
        count++;
    }
    */

    // for(count = 1; count <= 5; count++){
    for(count = 1; count <= n; count++){
        
        printf("%d) Hello Maharshi!\n", count);
    }
    printf("\n---End of the program---");
    return 0;
}
// Next class: Deep dive in for loop, examples of for & while loops