#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


struct LinkedList{
    char name[30];
    struct LinkedList *prev, *next;
};

typedef struct LinkedList LinkedList;

LinkedList *first , *last, *pointer;

void insertInTheEnd(){
    pointer = (LinkedList *) malloc( sizeof(LinkedList));
    puts("\nWhat's the name? ");
    gets(pointer->name);
    pointer->next = pointer->prev = NULL; //set prev and next as NULL


    if (first == NULL){ //true = there's no list
        first = last = pointer;
    } else {
        //set in the last position
        pointer->prev = last;
        last->next = pointer;
        last = pointer;
    }
}

void show() {
    pointer = first;
    while (pointer != NULL) {
        printf("\nName: %s" , pointer->name );
        pointer = pointer->next;
    }
}

void clear(){
    while (first != NULL) {
        pointer = first;
        first = first->next;
        free(pointer);
    }
    last = NULL;
}

LinkedList * search (char name[30]){
    pointer = first;
    while (pointer != NULL){
        if (strcmp(name, pointer->name)==0){
            return pointer;
        }
        pointer = pointer->next;
    }
    return NULL;
}

char found(LinkedList * f) {
    char result = (f != NULL) ? 'Y' : 'N';
    printf("\nFound? %c", result); 
}

int main(){

    for (int i = 0; i < 5; i ++) {
        insertInTheEnd();
    }
    show();

    char lookFor[30];
    puts("\n\nWhat's the name you are looking for? ");
    gets(lookFor);

    found( search(lookFor)); 

    clear();
   
    getch();
}