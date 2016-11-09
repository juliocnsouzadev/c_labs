#include <stdio.h>
#include <stdlib.h>

void q1(){
    printf("\n\nQ1:\n");
    int A=5;
    int B=3;
    int C=7;

    //I. A+B = C;  
    if ( A+B == C){
        printf("V\t");
    }else printf("F\t");
    
    //II. B+C < A; true
    if (B+C < A){
        printf("V\t");
    }else printf("F\t");
    
    //III. C < A*B; true
    if (C < A*B){
        printf("V\t");
    }else printf("F\t");
    
    //IV. B+C = 2*A;  
    if (B+C == 2*A){
        printf("V\t");
    }else printf("F\t");
    
    //V. C / B > A; 
    if (C / B > A){
        printf("V\t");
    }else printf("F\t");
}

void q2(){
    printf("\n\nQ2:\n");
    printf( "Salario: %f\n", 700.35);
}

void q3(){
    printf("\n\nQ3:\n");
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    if ((nota1+nota2)/2 >= 60){
        printf("\nAprovado com a media maior ou igual a %.2f", ((nota1+nota2)/2));
    }else {
         printf("\nReprovado com a media menor a %.2f", ((nota1+nota2)/2));
    }
}

void q4(){
    printf("\n\nQ4:\n");
    printf( "Valor: %f\n", 13.75649);
    printf( "Valor: %.3f\n", 12.34598);
    printf( "Valor: %.1f\n", 13.75649);
}

void q5(){
    printf("\n\nQ5:\n");
    int A=4;
    int B=2;
    int C=6;

    //I. A+B = C;  
    if ( A+B == C){
        printf("V\t");
    }else printf("F\t");
    
    //II. B+C < A; true
    if (B+C < A){
        printf("V\t");
    }else printf("F\t");
    
    //III. C < A*B; true
    if (C < A*B){
        printf("V\t");
    }else printf("F\t");
    
    //IV. B+C != 2*A;  
    if (B+C != 2*A){
        printf("V\t");
    }else printf("F\t");
    
}

int main(){  

    q1();
    q2();
    q3();
    q4();
    q5();

    //limpando os dados e esperando o usuario apertar -Enter-
    getchar();
    printf("\n\nPressione -Enter- para finalizar!\n\n");
    getchar();
}