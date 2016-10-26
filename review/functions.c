#include <stdio.h>
//#include "functions.h"

float median(float x, float y) {
    return (x + y) / 2.0;
}

void showMedia(){
    float n1, n2;
    printf("Insert the 1st number: ");
    scanf("%f",&n1);
    printf("\nInsert the 2nd number: ");
    scanf("%f",&n2);
    printf("The median is: %.1f", median(n1, n2));
    getch();
}

int main() {
    showMedia();
}

