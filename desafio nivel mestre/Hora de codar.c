#include <stdio.h>

int main(){

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B"; 

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.50;

unsigned int EstMinA = 500;
unsigned int EstMinB = 2500;

double ValorTotalA;
double ValorTotalB;

int resultadoA, resultadoB;

printf("O produto %s tem estoque %u o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);

printf("O produto %s tem estoque %u o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

resultadoA = estoqueA > EstMinA;
resultadoB = estoqueB > EstMinB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

printf("Valor total de A (R$ %.2f) é maior que valor total de B (R$ %.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA ) > (estoqueB * valorB));









}