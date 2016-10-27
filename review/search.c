#include <stdio.h>
#include <string.h>

void printVector(int vet[100], char notes[]){
    printf("\n\n%s\n", notes );
    for (int i = 0 ; i < 100; i++){
        printf("%d " , vet[i]);
    }
    printf("\n");
}

int search(int wanted, int vet[100]) {
    for (int i = 0 ; i < 100; i++){
        if (vet[i] == wanted){
            return i;
        }
    }
    return -1;
}

int main(){
    char notes[40];
    int vet[100];
    
    for (int i = 0 ; i < 100; i++){
        vet[i] = rand() % 100;
    }
    
    sprintf(notes,"SHOW VECTOR");
    printVector(vet, notes);

    int r = rand() % 100;
    int number = vet[r];
    int position = search(number, vet);
    if (position != -1){
        printf("\n%d Found at position %d", number, position);
    } else {
        printf("\n%d Not found!", number);
    }

    getch();
}