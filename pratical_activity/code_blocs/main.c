#include<stdio.h>
#include<stdlib.h>

int main(){
    int vector [][3] = {{8,2,4},{7,5,2}};

    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j =0; j < 3; j++){
            printf("\t%d",vector[i][j]);
        }
    }
}
