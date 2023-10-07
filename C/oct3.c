#include<stdio.h>

int main()
{
    int marks;
    printf("Marks: ");
    scanf("%d", &marks);
    /*
    marks < 35 => You need to re-attempt the test
    35 to 50 => You did it! You just passed the test
    51 to 70 => Great! You performed really well
    71 to 90 => Amazing! You are well above most of the class
    > 90 => Awesome! You have exceptional skills
    */
    // if - else ladder
    if (0 <= marks && marks < 35){      // 0 <= marks < 35
        printf("You need to re-attempt the test");
    }
    else if (35 <= marks && marks <= 50){
        printf("You did it! You just passed the test");
    }
    else if (51 <= marks && marks <= 70){
        printf("Great! You performed really well");
    }
    else if (71 <= marks && marks <= 90){
        printf("Amazing! You are well above most of the class");
    }
    else if (91 <= marks && marks <= 100){
        printf("Awesome! You have exceptional skills");
    }
    else{
        printf("Invalid marks, please try again...");
    }
    printf("\n...End of the program...");
    return 0;
}