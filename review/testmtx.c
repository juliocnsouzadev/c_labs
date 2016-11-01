#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    int x,y,mat[3][3];
    
    for(x=2; x>=0; x--)
        for(y=1; y<=3; y++)
            mat[x][y-1] = x + y;

    for(int i=0; i < 3; i++){
        printf("\n");
        for(int j=0; j < 3 ; j++)
            printf("\t%d",mat[i][j]);
    }
    
    printf("\n");

    for(y=0; y<9; y++){
        int v = mat[0][y];
        x += v;
        printf("\n%d\t%d\t%d",y,v,x);
    }

    printf("\n\n%d",x);

    getch();
}