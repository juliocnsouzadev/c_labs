#include <stdio.h>
#include <string.h>

void printVector(int vet[4], char notes[]){
    printf("\n\n%s\n", notes );
    for (int i = 0 ; i < 4; i++){
        printf("%d " , vet[i]);
    }
}

void bubbleSort(int vet[4]){
    int counter = 0;
    int size = 4;

    while (counter < size){
        for (int i =0 ; i < size-1; i++){
            int actual = vet[i];
            int next = vet[i+1];
            if (next < actual){
                vet[i] = next;
                vet[i+1]= actual;
            }
        }
        counter++;
    }

}

int main(){
    char notes[40];
    int vet[4] = {50,36,1,8};
    
    sprintf(notes,"BEFORE BUBBLE SORT");
    printVector(vet, notes);

    bubbleSort(vet);

    sprintf(notes,"AFTER AFETER BUBBLE SORT");
    printVector(vet, notes);

    getch();
}