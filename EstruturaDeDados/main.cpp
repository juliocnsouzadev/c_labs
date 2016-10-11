#include <iostream>

using namespace std;

int menu_teste2(int *op)
{
    printf(“Digite 1 para Cadastrar: \n”);
    printf(“Digite 2 para Atualizar: \n”);
    printf(“Digite 3 para Listar: \n”);
    printf(“Digite 4 para Imprimir: \n”);
    printf(“Digite 5 para Sair: \n”);
    scanf(“%d”, op);
}

int main()
{
    struct Dados {
        int idade;
        float peso, altura;
    };
    struct Dados pessoa[50];

    int num;
    menu_teste2(&num);
    switch(	num)
    {	case 1:	função_cadastra();	break;
        case 2:	função_atualizar();	break;
        case 3:	função_listar();	break;
        case 4:	função_imprimir();	break;
    }

    return 0;
}
