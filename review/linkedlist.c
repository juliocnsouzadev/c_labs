#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
    
    struct Node {
        int info;
        struct Node *prox;
    };
    typedef struct Node Node;
    
    void init(Node **fila); 
    void inserir(Node **fila, int info);
    void remover(Node **fila, int *info);
    void mostrar(Node *fila);
    char estaVazia(Node *fila);
    int tamanho(Node *fila);
    void limpar(Node **filaE);
    void removerNode(Node **fila, int info);
    
    void init(Node **fila){
        *fila=NULL;
    }
    
    void inserir(Node **fila, int info){
        Node *Nodeva=(Node*)malloc(sizeof(Node));
        Node *aux;
        Nodeva->info=info;
        Nodeva->prox=NULL;
        
        if(*fila==NULL){
            *fila=Nodeva;
        }else{
           aux=*fila;
            while(aux->prox!=NULL){
                aux=aux->prox;
            }
            aux->prox=Nodeva;
        }
    }
    
    void remover(Node **fila, int *info){
        Node *aux;
        if(*fila!=NULL){    
            aux=*fila;
            *info=(*fila)->info;
            *fila=(*fila)->prox;
            free(aux);
        }
    }
    
    char estaVazia(Node *fila){
        return(fila==NULL);
    }
    
    void list(Node *fila){
        while(fila!=NULL){
            printf("[%d]",fila->info);
            fila=fila->prox;
        }
    }
    
    int tamanho(Node *fila){
        int cont=0;
        while(fila!=NULL){
            cont++;
            fila=fila->prox;
        }
        return cont;
    }
    void limpar(Node **filaE){
        Node *aux;
        while(*filaE!=NULL){
            aux=*filaE;
            *filaE=(*filaE)->prox;
            free(aux);
        }
    }
   
    void removerNode(Node **fila, int info){
        Node *aux=*fila,*ant;
        while(aux!=NULL && aux->info!=info){
            ant=aux;
            aux=aux->prox;
        }
        if(aux!=NULL){
            ant->prox=aux->prox;
            free(aux);
        }
    }

    int main() {
    char menu[7][50];
    int op, aux;
    Node *fila;
    init(&fila);
    strcpy(menu[0], "[1] Inserir elementos na fila");
    strcpy(menu[1], "[2] Retirar elementos da fila");
    strcpy(menu[2], "[3] Exibir elementos da fila");
    strcpy(menu[3], "[4] Exibir tamanho da fila");
    strcpy(menu[4], "[5] Destruir a fila");
    strcpy(menu[5], "[6] Finalizar");
    
    do {
        printf("\n************Menu Principal ************\n");
        for (int i = 0; i < 6; i++){
            printf(menu[i]);
            printf("\n");
        }

        scanf("%d", &op);
        switch (op) {
            case 1:
                for (int i = 0; i < 30; i++)
                    inserir(&fila, i);
                printf("Total elementos na fila [%d]\n", tamanho(fila));
                break;
            case 2:
                remover(&fila, &aux);
                printf("Elemento retirado [%d]\n", aux);
                printf("Total elementos restantes [%d]\n", tamanho(fila));

                break;
            case 3:
                list(fila);

                break;
            case 4:
                printf("Total elementos restantes [%d]\n", tamanho(fila));


                break;

            case 5:
                while (!estaVazia(fila)) {
                    remover(&fila, &aux);
                }
                printf("Total elementos restantes [%d]\n", tamanho(fila));


                break;

        }
        getchar();
        printf("\n\nPressione -Enter- para continuar!\n\n");
        getchar();
    } while (op != 6);
}