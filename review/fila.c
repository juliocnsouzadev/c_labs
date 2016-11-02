#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 50
int fila[TAMANHO];
int inicio = 0;
int fim = 0;
int cont = 0;
//insere valor na fila
void insere(int valor){
printf("\n");
if(cont == TAMANHO){
printf("Fila cheia!\n");
return;
}
fila[fim] = valor;
if(fim == TAMANHO-1)
fim = 0;
else
fim++;
cont++;
printf("Inserido!\n");
}
//remove o primeiro elemento da fila 
void apagar(){
printf("\n");
if(cont == 0){
printf("Fila vazia!\n");
return;
}
if(inicio == TAMANHO-1)
inicio = 0;
else
inicio++;
cont--;
printf("Removido!\n");
}

//Imprime a fila
void imprime(){
printf("\n");
int i,j;
if(cont == 0){
printf("Fila vazia!\n");
return;
}
printf("\nFila:");
j = inicio;
for(i = 0; i < cont; i++){
printf("\n%d", fila[j]);
if(j == TAMANHO-1)
j = 0;
else
j++;
}
}

int main(){
int op = 0, valor;
do{
printf("\n\n**********************************");
printf("\nSelecione a opcao(0 para sair):\n");
printf("1 - Inserir\n");
printf("2 - Remover\n");
printf("3 - Imprimir\n");
scanf("%d", &op);
switch(op){
case 1: printf("Digite o valor a ser inserido:\n");
scanf("%d", &valor);
insere(valor);
break;
case 2: apagar();
break;
case 3: imprime();
break;
default: printf("Digite uma opcao valida\n");
break;
} 
} while (op != 0);
printf("\n**********************************\n");
system("pause");
return 1;
}