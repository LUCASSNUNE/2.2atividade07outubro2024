#include <stdio.h>

int main() {

    float metrosQuadrado;
    float custo;
    float preco; 

    printf("Informe quantos metros quadrodos tem seu local: ");
    scanf("%f", &metrosQuadrado);

    printf("Informe quantos custa o metro quadrodo: ");
    scanf("%f", &custo);

    preco = metrosQuadrado*custo;
    printf("%f",preco);
 
}