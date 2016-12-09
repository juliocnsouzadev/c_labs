/*
Usando a linguagem de programação C/C++ escreva um programa que preenche um vetor de inteiros com 20 posições de números maiores ou iguais a 10 e menores que 100, e imprima o maior número armazenado neste vetor. Observe que, sempre que o usuário digitar um número fora do intervalo permitido o programa deverá solicitar outro número até que o vetor esteja preenchido. Observe também que o seu programa deverá imprimir, além do maior número armazenado, o vetor contendo os números digitados.
*/
#include <stdio.h>
#include <stdlib.h>

int vectorSize = 20;
int min = 10;
int max = 100;
int vec[20];
int bigger = -1;

int getNumber(){
    int value = -1;
    scanf("%d",&value);
    return value;
}

void askUser(int position){
    int userPosition = position +1;
    printf("\nInforme o valor da posicao %d de %d do vetor: ",userPosition, vectorSize);
    int userPassedValue = getNumber();
    while(userPassedValue < min || userPassedValue > max){
        printf("\nOops! Valor invalido! Informe um numero >=10 e <=100 para posicao %d de %d do vetor: ",userPosition, vectorSize);
        userPassedValue = getNumber();
    }
    if (userPassedValue > bigger) {
        bigger = userPassedValue;
    }
    vec[position] = userPassedValue;
    printf("\n");
}



main() {
    for(int i=0; i < vectorSize; i++) {
        askUser(i);
    }
    printf("\n\nO maior numero informado foi %d: ", bigger);
}
