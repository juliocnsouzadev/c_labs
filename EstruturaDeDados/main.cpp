#include <iostream>

using namespace std;

int menu_teste2(int *op)
{
    printf(�Digite 1 para Cadastrar: \n�);
    printf(�Digite 2 para Atualizar: \n�);
    printf(�Digite 3 para Listar: \n�);
    printf(�Digite 4 para Imprimir: \n�);
    printf(�Digite 5 para Sair: \n�);
    scanf(�%d�, op);
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
    {	case 1:	fun��o_cadastra();	break;
        case 2:	fun��o_atualizar();	break;
        case 3:	fun��o_listar();	break;
        case 4:	fun��o_imprimir();	break;
    }

    return 0;
}
