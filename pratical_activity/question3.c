/*
Usando a linguagem de programação C/C++ escreva um programa que recebe uma string de até 20 caracteres e imprime, a string digitada, um vetor contendo as cinco primeiras vogais da string digitada e um vetor contendo as cinco últimas consoantes da string digitada. Observe que para resolver este problema, o seu programa deverá ter uma função para identificar se um caractere é vogal ou não.
*/

#include <stdio.h>
#include <string.h>

char word[20];
char vogals[5];
char cons[5];

int i;
int v =0;
int c =0;

void showWord(){
    for( i = 0; i < 20; i++){
        char letter = word[i];
        printf("%c", letter);
    }
    printf("\n");
}

void showVogals(){
    for( i = 0; i < 5; i++){
        char letter = vogals[i];
        printf("%c", letter);
    }
    printf("\n");
}

void showCons(){
    int lef = strlen(cons);
    for( i = 0; i < 5; i++){
        char letter = cons[i];
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
    int wordLen = strlen(word);
    for ( i = 0 ; i < wordLen; i++){
        if (isVogal(word[i]) > 0 && v < 5){
            vogals[v] = word[i];
            v++;
        }
    }
}

void buildCons(){
    int wordLen = strlen(word) - 1;
    for ( i = wordLen ; i > -1; i--){
        if (isVogal(word[i]) == 0 && c < 5){
            cons[c] = word[i];
            c++;
        }
    }

}

void buildWord(){
    printf("\nInforme uma palavra de ate 20 caracteres:\n");
    scanf(" %s", &word);
    buildVogals();
    buildCons();
}

int main(){
    buildWord();
    printf("\n\nA palavra informada foi: ");
    showWord();

     printf("\n\nCom as 5 primeiras vogais: ");
    showVogals();

     printf("\n\nCom as 5 ultimas consoantes: ");
    showCons();
}
