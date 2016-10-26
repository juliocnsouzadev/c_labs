#include <stdio.h>
#include <string.h>


int main() {
    char palavraSecreta[20];
    char palavra[20];
    sprintf(palavraSecreta,"MELANCIA");

    int acertos = 0;
    int tentativas = 0;
    int size = strlen(palavraSecreta);
    int acertou = 0;

    for(int i = 0; i < size; i++){
            palavra[i] = '_';
    }

    do {
        tentativas++;
        
        char chute;
        printf("\nInforme uma letra:\n");
        scanf(" %c", &chute);
        printf("\n");

        for(int i = 0; i < size; i++){
            char letra = palavraSecreta[i];
            if (letra == chute) {
                palavra[i] = letra;
                acertos++;
                acertou = 1;
            }
        }

        for(int i = 0; i < size; i++){
            char letra = palavra[i];
            printf("%c\t", letra);
        }

        if (acertou) {
            acertou = 0;
        }
        
    }
    while (acertos != size && tentativas != size);

    if (acertos == size){
        printf("\n:D Voce acertou a palavra: %s", palavraSecreta);
    }else{
        printf("\n:( Voce perdeu! A palavra era: %s", palavraSecreta);
    }

}
