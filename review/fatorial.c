#include <stdio.h>

int calculaFatorial(int n) {
    int fat;
    for(fat = 1; n > 1; n = n - 1) {
        fat = fat * n;
    }
    return fat;
}

int main()
{
    int fat, n;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);

    fat = calculaFatorial(n);

    printf("\nFatorial calculado: %d", fat);
    getch();
    return 0;
}