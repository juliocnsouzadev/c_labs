#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32 
#define limpa_tela system("cls")

#else
#define limpa_tela system("/usr/bin/clear")
#define espera sleep(1)
#endif

//declaração de variáveis
int nPos=10, nAux=0;
int nInd=0, nAtual=0;
int nTroca=0, nChave=0;

//criando o vetor
int nVetor[10], nOrig[10], nOpc=-1;

void bubbleSort() {
    nTroca = nPos - 1 ;
    for(nInd = 0; nInd < nPos; nInd++) {
        for(nAux=0;nAux<=nPos-1;nAux++){
            printf("[%d]",nVetor[nAux]);
        }

        for(nAtual = 0; nAtual < nTroca; nAtual++){
            if(nVetor[nAtual] > nVetor[nAtual+1]){
                nAux = nVetor[nAtual];
                nVetor[nAtual] = nVetor[nAtual+1];
                nVetor[nAtual+1]=nAux;
            }
        }
        nTroca--;
        printf("\n");
    }
}

int main(){   
    //preenchendo os dados do vetor
    for(nAux=0;nAux<=nPos-1;nAux++){
        printf("\nInforme um numero inteiro %d: ",nAux+1);
        scanf("%d",&nVetor[nAux]);
        nOrig[nAux]=nVetor[nAux];
    }

    limpa_tela; //limpando a tela

    bubbleSort();
    

    //Resultado - Vetor Original
    printf("\nOriginal: ");
    for(nAux=0;nAux<=nPos-1;nAux++){
        printf("[%d]",nOrig[nAux]);
    }

    //Resultado - Vetor Ordenado
    printf("\nOrdenada: ");
    for(nAux=0;nAux<=nPos-1;nAux++){
        printf("[%d]",nVetor[nAux]);
    }

    //limpando os dados e esperando o usuario apertar -Enter-
    getchar();
    printf("\n\nPressione -Enter- para finalizar!\n\n");
    getchar();
}