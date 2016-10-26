#include <stdio.h>
#include <string.h>


void header(){
    printf("================ WELCOME! LET'S PLAY A GAME? TRY TO GUESS A WORD! ================\n");
}

void initialization(char word[20], char secretWord[20], int* size){
    sprintf(secretWord,"MELANCIA");
    (*size) = strlen(secretWord);
}

void initWithUnderlines(char word[20], int size){
    for(int i = 0; i < size; i++){
            word[i] = '_';
    }
}

char kick(int* attempts){
    char k;
    printf("\nGuess a letter:\n");
    scanf(" %c", &k);
    printf("\n");
    (*attempts)++;
    return k;
}

void guess(int size, int* rights, int* rightAttempt, char word[20], char secretWord[20], char kick){
    for(int i = 0; i < size; i++){
        char letter = secretWord[i];
        if (letter == kick) {
            word[i] = letter;
            (*rights)++;
            (*rightAttempt) = 1;
        }
    }
}

void showWord(char word[20], int size){
    for(int i = 0; i < size; i++){
        char letter = word[i];
        printf("%c\t", letter);
    }
    printf("\n");
}

void showErrors(int errors) {
    printf("\n");
    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (errors>=1?'(':' '), 
        (errors>=1?'_':' '), (errors>=1?')':' '));
    printf(" |      %c%c%c  \n", (errors>=3?'\\':' '), 
        (errors>=2?'|':' '), (errors>=3?'/': ' '));
    printf(" |       %c     \n", (errors>=2?'|':' '));
    printf(" |      %c %c   \n", (errors>=4?'/':' '), 
        (errors>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");
    }

void conclusion(int rights, int size, char secretWord[20]) {
    if (rights == size){
        printf("\nUHUUUU!!! :D\n");
        printf("YOU WIN! THE WORD REALLY IS : %s\n", secretWord);
        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");
    }else{
        printf("\nOOOOPS! =/\n");
        printf("YOU LOOSE! THE RIGHT WORD WAS: %s\n", secretWord);
        printf("    _______________         \n");
        printf("   /               \\       \n"); 
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           | |        \n");
        printf("   | I I I I I I I |        \n");
        printf("   |  I I I I I I  |        \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    }
    char end;
    scanf(" %c", &end);
}

int main() {
    //declarations
    int rights =0 , attempts= 0, size = 0, rightAttempt = 0, errors = 0;;
    char secretWord[20];
    char word[20];
    //initializations
    initialization(word, secretWord, &size);
    initWithUnderlines(word, size);
    //start game
    header();
    do {   
        guess(size, &rights, &rightAttempt, word, secretWord,  kick(&attempts));
        showWord(word, size);        
        if (rightAttempt) {
            rightAttempt = 0;
        }else{
            errors++;
        }
        showErrors(errors);
    }
    while (rights != size && attempts != size && errors < 4);
    conclusion(rights, size, secretWord);

}
