#include <stdio.h>
#include <stdlib.h>

int Fib(int n1, int n2, int impr, int limite)
{
    printf(“ %d ”, n2);

    if (impr == limite)
        {
            return(0);
        }
    else
        {
            Fib(n2, (n1+n2),  ++impr, limite);
        }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
