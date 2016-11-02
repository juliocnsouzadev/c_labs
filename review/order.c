#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32 
#define limpa_tela system("cls")

#else
#define limpa_tela system("/usr/bin/clear")
#define espera sleep(1)
#endif

main(){
//declaração de variáveis
int nPos=0, nAux=0;
int nInd=0, nAtual=0;
int nTroca=0, nChave=0;

//Quantidade de casas do vetor
while((nPos<=0)||(nPos>100)){
printf("\nInforme o total de numeros do vetor por favor? ");
scanf("%d",&nPos);
}

//criando o vetor
int nVetor[nPos], nOrig[nPos], nOpc=-1;

//preenchendo os dados do vetor
for(nAux=0;nAux<=nPos-1;nAux++){
printf("\nInforme um numero inteiro %d: ",nAux+1);
scanf("%d",&nVetor[nAux]);
nOrig[nAux]=nVetor[nAux];
}

limpa_tela; //limpando a tela

while((nOpc<=0)||(nOpc>=4)){
printf("\n > Menu:");
printf("\n 1. Selecao | Selection Sort");
printf("\n 2. Insercao | Inserction Sort");
printf("\n 3. Troca | Bubble Sort");
printf("\n > Resposta: ");
scanf("%d",&nOpc);
}

printf("\nOrdenando:\n");
int i, j, t, m;

if(nOpc==1){
//Seleção
for(nInd=0; nInd<=nPos-1; nInd++){
for(nAux=0;nAux<=nPos-1;nAux++){
printf("[%d]",nVetor[nAux]);

}

nChave=nInd;
for(nAtual=nInd+1; nAtual<=nPos-1; nAtual++){
if(nVetor[nAtual]<nVetor[nChave])
nChave=nAtual;
}
nTroca = nVetor[nChave];
nVetor[nChave]=nVetor[nInd];
nVetor[nInd]=nTroca;
printf("\n");
}
}

else if(nOpc==2){
//inserção
for ( nInd=1; nInd<nPos; nInd++){
for(nAux=0;nAux<=nPos-1;nAux++){
printf("[%d]",nVetor[nAux]);

}
nChave = nVetor[nInd];
nAtual = nInd-1;

while( nAtual>=0 && nVetor[nAtual]> nChave){
nVetor[nAtual+1] = nVetor[nAtual];
nAtual-=1;
nVetor[nAtual+1] = nChave;
}
printf("\n");
}
}

else if (nOpc==3){
//bubble - troca
nTroca = nPos - 1 ;
for(nInd = 0; nInd < nPos; nInd++)
{
for(nAux=0;nAux<=nPos-1;nAux++){
printf("[%d]",nVetor[nAux]);

}

for(nAtual = 0; nAtual < nTroca; nAtual++)
{
if(nVetor[nAtual] > nVetor[nAtual+1])
{
nAux = nVetor[nAtual];
nVetor[nAtual] = nVetor[nAtual+1];
nVetor[nAtual+1]=nAux;
}
}
nTroca--;
printf("\n");
}
}

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