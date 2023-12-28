/*
#include<stdio.h>
#define N 5

int main()
{

    p = [0,1,2,3,4,5,6,7,8,9], temp
    p = [a,b,c,d,e,f,g,h,i,j]
    
    // swaps 'a' & 'j'
    temp = p[0]
    p[0] = p[9]
    p[9] = temp
    
    // swaps 'b' & 'i'
    temp = p[1]
    p[1] = p[8]
    p[8] = temp
    
    // swaps 'c' & 'h'
    temp = p[2]
    p[2] = p[7]
    p[7] = temp
    
    // swaps 'd' & 'g'
    temp = p[3]
    p[3] = p[6]
    p[6] = temp
    
    // swaps 'e' & 'f'
    temp = p[4]
    p[4] = p[5]
    p[5] = temp


    int a[N], i, j, temp, h;
    printf("Enter %d integers:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    // reversing the array:
    j = N-1;
    h = N/2;
    for(i = 0; i < h; i++){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("Reversed Array: \n[\t");
    for(i = 0; i < N; i++){
        printf("%d\t", a[i]);
    }
    printf("]");
    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int a[100], i, j, temp, N;
    printf("Enter size of the array (must be between 1 to 100 including both): ");
    scanf("%d", &N);
    printf("Enter %d integers:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    // reversing the array:
    j = N-1;
    for(i = 0; i < N/2; i++){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    printf("Reversed Array: \n[\t");
    for(i = 0; i < N; i++){
        printf("%d\t", a[i]);
    }
    printf("]");
    return 0;
}
*/

#include<stdio.h>
#define PI 3.141596
#define AREA PI*r*r

int main(){
    float r, a;
    printf("Radius: ");
    scanf("%f", &r);
    // a = PI * r * r;
    printf("Area = %.2f", AREA);
    return 0;
}