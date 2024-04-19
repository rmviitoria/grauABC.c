/******************************************************************************

Crie um programa que recebe a nota do Grau A e a nota do Grau B pelo teclado 
e imprime na tela se será necessário ou não realizar o Grau C 
(considere o sistema de avaliação da Unisinos, no qual o GA vale 33% e o GB vale 67%). 
Caso algum valor informado seja negativo, informe uma mensagem de erro e não realize o cálculo.

*******************************************************************************/
#include <stdio.h>


int main() {
    float nota_ga, nota_gb;
    float media;

    printf("Digite a nota do Grau A: ");
    scanf("%f", &nota_ga);
    printf("Digite a nota do Grau B: ");
    scanf("%f", &nota_gb);

    if (nota_ga < 0 || nota_gb < 0) {
        printf("Erro: As notas não podem ser negativas.\n");
        return 1; 
    }

    media = (nota_ga * 0.33) + (nota_gb * 0.67);

    if (media < 6.0) {
        printf("Será necessário realizar o Grau C.\n");
    } else {
        printf("Não será necessário realizar o Grau C.\n");
    }


    return 0; 
}
