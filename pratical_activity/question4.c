/*
Usando a linguagem de programação C/C++, escreva um programa que receba uma string de até 20 caracteres,  conte o número de vogais existentes nesta string e imprima o número total de caracteres da string, o número de vogais nesta string e o percentual de vogais em relação ao comprimento da string.
*/

#include <stdio.h>
#include <string.h>

char word[20];

int i;
int ttVogals;
int wordSize;
float percentVogals = 200.1;

void showWord(){
    for( i = 0; i < 20; i++){
        char letter = word[i];
        printf("%c", letter);
    }
    printf("\n");
}

int isVogal(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return 1;
        }
    return 0;
}

void buildVogals(){
    wordSize = strlen(word);
    for ( i = 0 ; i < wordSize; i++){
        if (isVogal(word[i]) > 0 ){
            ttVogals++;
        }
    }
    if (wordSize > 0 && ttVogals > 0){
        percentVogals = (float)ttVogals / (float)wordSize;
    }
}

void buildWord(){
    printf("\nInforme uma palavra de ate 20 caracteres:\n");
    scanf(" %s", &word);
}

int main(){
    buildWord();
    printf("\n\nA palavra informada foi: ");
    showWord();
    buildVogals();
    printf("\nCom um total de %d vogais.", ttVogals);
    printf("\nO que reprenta %f porcento do total de %d de letras da palavra.", percentVogals, wordSize);
}