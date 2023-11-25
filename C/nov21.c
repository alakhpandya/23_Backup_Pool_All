/*
1. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
*****

2. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
*
*
*
*
*

3. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
*****
*****
*****
*****
*****

*/

#include<stdio.h>
/*
int main()
{
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("*");
    }
    return 0;
}
*/

/*
int main()
{
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("*\n");
    }
    return 0;
}
*/
/*
int main()
{
    int n, i, j;
    printf("n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
4. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
*
**
***
****
*****

int main(){
    int n, i, j;
    printf("n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
5. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
*****
****
***
**
*

Outer loop should be: for(i = 1; i <= n; i++)

int main(){
    int n, i, j;
    printf("n: ");
    scanf("%d", &n);    // n = 5
    for(i = 1; i <= n; i++){    
        for(j = 1; j <= n-i+1; j++){        // x=5,4,3,2,1: n-i+1: 4,3,2,1,0
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


/*
6. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
     *
    **
   ***
  ****
 *****


int main(){
    int n, i, j;
    printf("n: ");
    scanf("%d", &n);    // n = 5
    for(i = 1; i <= n; i++){    
        for(j = 1; j <= n-i+1; j++){
            printf(" ");
        }
        // star printing
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
7. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
     *
    * *
   * * *
  * * * *
 * * * * *

int main(){
    int n, i, j;
    printf("n: ");
    scanf("%d", &n);    // n = 5
    for(i = 1; i <= n; i++){    
        for(j = 1; j <= n-i+1; j++){
            printf(" ");
        }
        // star printing
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
8. Ask an integer 'n' from user and print '*' as shown below:

Example:
n : 5
Output:
 * * * * *
  * * * *
   * * *
    * *
     *
*/

/*
9. Ask two integers 'n' & 'm' from user and print pattern of '*' as shown below:

Example:
n : 5
m : 3
Output:
     *          *          *
    * *        * *        * *
   * * *      * * *      * * *
  * * * *    * * * *    * * * *
 * * * * *  * * * * *  * * * * *

*/

