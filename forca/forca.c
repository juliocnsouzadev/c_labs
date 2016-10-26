#include <stdio.h>
#include <string.h>


void header(){
    printf("================ WELCOME! LET'S PLAY A GAME? ================\n");
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

void conclusion(int rights, int size, char secretWord[20]) {
    if (rights == size){
        printf("\nUHUUUU!!! :D\n");
        printf("YOU WIN! THE WORD REALLY IS : %s", secretWord);
    }else{
        printf("\nOOOOPS! =/\n");
        printf("YOU LOOSE! THE RIGHT WORD WAS: %s", secretWord);
    }
    char end;
    scanf(" %c", &end);
}

int main() {
    //declarations
    int rights =0 , attempts= 0, size = 0, rightAttempt = 0;
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
        }
    }
    while (rights != size && attempts != size);
    conclusion(rights, size, secretWord);

}
