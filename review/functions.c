#include <stdio.h>
#include "functions.h"

void median(float x, float y, float* median) {
    (*median) = (x + y) / 2.0;
}

void showMedia(){
    float n1, n2;
    printf("\nMedia\n");
    printf("Insert the 1st number: ");
    scanf("%f",&n1);
    printf("\nInsert the 2nd number: ");
    scanf("%f",&n2);
    float m = 0.0;
    median(n1, n2, &m);
    printf("The median is: %.1f\n",m);
}

int regrSum(int value) {
    if (value > 0) {
        return value + regrSum(value -1 );
    }
    return value;
}

void showSum() {
    int n1;
    printf("\nRegression Sum\n");
    printf("Insert a number: \n");
    scanf("%d",&n1);
    int numbers[n1];
    printf("Sum of: ");
    for (int i = n1; i > 0; i--){
        printf("%d, ", i );
    }
    int v = regrSum(n1);
    printf("is : %d", v);
}

int main() {
    showMedia();
    showSum();

    getch();
}

