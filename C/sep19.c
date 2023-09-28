// Operators
/*
1. Arithmetic Operators:
    +, -, *, /, %
2. Increment/Decrement Operators:
    

*/

/*
#include<stdio.h>
int main()
{
    int a, b, rem;
    float c, d;
    printf("a: ");
    scanf("%d", &a);    // format specifier
    printf("b: ");
    scanf("%d", &b);
    // printf("a = %d\n", a);
    // c = (float) a / b;
    // c = a /(float) b;
    c = (float) a /(float) b;   // converting = type casting
    // d = a / b;   //  a = 27, b = 6, d = 4.0
    printf("c = %.2f\n", c);
    // printf("d = %.2f\n", d);

    rem = a % b;
    printf("remainder = %d\n", rem);
    return 0;
}
*/

// Application of modulo operator: Take days from user and divide them in years + days
/*
Example:
input: 
days = 1000

*/
/*
#include<stdio.h>
int main()
{
    int days, years, remaining_days;
    printf("Days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("Years = %d\n", years);
    remaining_days = days % 365;
    printf("Remaining Days = %d\n", remaining_days);
    return 0;
}
*/
// Ask number of days from user. Assume each month to be of 30 days exactly for simplicity. Print the answer as: ___ years, ___ months and _____ days.

// 1230 days = 3 years, 4 months, 15 days

#include<stdio.h>
// Environment/IDE: Integrated Development Environment
int main(){
    int days, years, months, remaining_days;    // camel case: remainingDays, iPhone, eBay
    printf("Days: ");       
    scanf("%d", &days);
    years = days / 365;

    printf("%d years, ", years);
    remaining_days = days % 365;
    months = remaining_days / 30;

    printf("%d months, ", months);
    remaining_days = remaining_days % 30;
    /*
    a = 5 * 4
     <--
    5 = a
    */
    printf("%d days", remaining_days);
    return 0;
}