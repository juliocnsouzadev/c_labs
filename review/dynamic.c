#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


int main(){
    int vectorSize;
    printf("Inform the number of positions needed for the vector: ");
    scanf("%d", &vectorSize);
    
    int *vectorPointer;
    vectorPointer = (int *) malloc(vectorSize * sizeof(int));
    
    if (vectorPointer == NULL) {
        printf("\nOops, not enought memory avaliable.");
        exit(1);
    }

    for (int i = 0; i < vectorSize; i++){
        vectorPointer[i] = rand() % 100;
        printf("%d " , vectorPointer[i]);
    }
    free(vectorPointer);

    //MATRIX
    int columms;
    printf("\n\nInform the number of columms of the matrix: ");
    scanf("%d", &columms);

    int lines;
    printf("\nInform the number of lines of the matrix: ");
    scanf("%d", &lines);
    
    int **matrixPointer;
    matrixPointer = (int **) malloc(lines * sizeof(int));
    
    if (matrixPointer == NULL) {
        printf("\nOops, not enought memory avaliable.");
        exit(1);
    }

    for (int i = 0; i < lines; i++){
        matrixPointer[i]= (int *) malloc(columms * sizeof(int));
    }

    for (int i = 0; i < lines; i++){
        printf("\n");
        for(int j = 0; j < columms; j++){
            matrixPointer[i][j] = rand() % 100;
            printf("%d\t" , matrixPointer[i][j]);
        }
    }
    for (int i = 0; i < lines; i++){
        free(matrixPointer[i]);
    }
    free(matrixPointer);

    getch();
}