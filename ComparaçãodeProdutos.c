#include <stdio.h>
int main() {

    char produtoA[50] = "Refrigerante"; //%s
    char produtoB[50] = "Coxinha";
    
    unsigned int estoqueA = 500;
    unsigned int estoqueB = 200;

    float valorA = 6.00; //%s
    float valorB = 3.50;

    unsigned int estoqueminA = 300;// %u
    unsigned int estoqueminB = 150;

    double valorTA;
    double valorTB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o preço é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o preço é R$%.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminA;
    resultadoB = estoqueB > estoqueminB;

    printf("o produto %s tem estoque minimo: %d\n", produtoA, resultadoA);
    printf("o produto %s tem estoque minimo: %d\n", produtoB, resultadoB);
    
    printf("o valor total de A é maior que o valor total de B? %d\n", (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}