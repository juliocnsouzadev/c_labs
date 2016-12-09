/*
Utilizando a linguagem de programação C/C++, o aluno deverá escrever um programa que receba uma matriz 3X3  de números inteiros e imprima, na tela do console, tanto a matriz digitada quanto a diagonal principal da mesma.
*/

#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>

int a[3][3], b[3][3], c[3][3];
int line, columms;

void buildMatrizA(){
    for (line = 0; line < 3; line++){
        for (columms = 0; columms < 3; columms++){
        printf("Elemento [%d][%d]: ", line + 1, columms + 1);
        scanf("%d", &a[line][columms]);
        }
    }
}

void showMatrizA(){
    for (line = 0; line < 3; line++){
        for (columms = 0; columms < 3; columms++){
            printf("%3d", a[line][columms]);
        }
        printf("\n");
    }
}

void buildMatrizB(){
    for (line = 0; line < 3; line++){
        for (columms = 0; columms < 3; columms++){
        printf("Elemento [%d][%d]: ", line + 1, columms + 1);
        scanf("%d", &b[line][columms]);
        }
    }
}

void showMatrizB(){
    for (line = 0; line < 3; line++){
        for (columms = 0; columms < 3; columms++){
            printf("%3d", b[line][columms]);
        }
        printf("\n");
    }
}

void buildMatrizC(){
    for (line = 0; line < 3; line++){
        c[line][columms] = 0;
        for (columms = 0; columms < 3; columms++){
            c[line][columms] = ((a[line][columms]) * (b[line][columms]));
        }
    }
}

void showMatrizC(){
    printf("\n\n");
    printf("---------------------------- Matriz C ---------------------------------\n\n");
    for (line = 0; line < 3; line++){
        for (columms = 0; columms < 3; columms++){
            printf("%3d", c[line][columms]);
        }
        printf("\n\n");
    }
}

void main() {
    buildMatrizA();
    showMatrizA();

    buildMatrizB();
    showMatrizB();

    buildMatrizC();
    showMatrizC();

    printf("\n\n");
    printf("----------------------------Diagonal principal--------------------------------\n");
    for (int line = 0; line <3; line++) {
        for (int columms = 0; columms <3; columms++){
            if (line == columms){
                printf(" %3d", c[line][columms]);
            }
        }
    }

    printf("\n\n");

    system("PAUSE");

}

