#include <stdio.h>

int main(){

int numero1 = 1, resultado;

//printf("Antes Incremento: %d\n", numero1);
//numero1++;
resultado = numero1++;
printf("Apos Pós-Incremento: %d\n - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Apos Pré-Incremento: %d\n - Resultado: %d\n", numero1, resultado);

resultado = numero1--;
printf("Apos Pos-Decremento: %d\n - Resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos Pré-Decremento: %d\n - Resultado: %d\n", numero1, resultado);


//numero1--;
//printf("Apos Decremento: %d\n", numero1);


}