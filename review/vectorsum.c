#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *v;
    int n,i,soma=0;
    printf("\Informe o tamanho do vetor: ");
    scanf("%d",&n);
    v=(int*)malloc(n * sizeof(int));
    
    for(i=0;i<n;i++){
        printf("Informe os numeros do vetor: ");
        scanf ("%d",&v[i]);
        soma=soma+v[i];
    }
    
    printf("\n\nValores digitados: \n");
    for (i=0; i<n; i++){
        printf("\n %d \n",v[i]);
    }
    printf("\n A soma dos valores do vetor eh: %d \n",soma);
    
    getchar();
    printf("\n\nPressione -Enter- para finalizar!\n\n");
    getchar();
}