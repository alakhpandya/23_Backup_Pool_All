#include<stdio.h>

void republicDay(){
    printf("Republic Day is the day when the Republic of India marks and celebrates the date on which the Constitution of India came into effect on 26 January 1950.\nThis replaced the Government of India Act 1935 as the governing document of India, thus turning the nation from a dominion into a republic separate from British Raj.\nThe constitution was adopted by the Indian Constituent Assembly on 26 November 1949 and came into effect on 26 January 1950.\n26 January was chosen as the date for Republic Day as it was on that day in 1930 when the Declaration of Indian Independence was proclaimed by the Indian National Congress.\n\n");
}
int main()
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if(a  > b){
        republicDay();
    }
    if (a / b > 1){
        republicDay();
    }
    if (b - a < 0){
        republicDay();
    }
    if (b != a){
        republicDay();
    }
    return 0;
}

/*
What we give to assitant is called 'argument'/'parameter'
What assistant gives us back is called 'return'
Four types of assistance (functions):
1. Without argument without return
2. With argument without return
3. Without argument with return
4. With argument with return
*/