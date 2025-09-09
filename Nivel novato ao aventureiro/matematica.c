#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisão;

    printf("Entre com o numero 1:\n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2\n");
    scanf("%d", &numero2);

// operação soma
    soma = numero1 + numero2;
// operação subtração
    subtracao = numero2 - numero1;
// operação multiplicação
    multiplicacao = numero1 * numero2;
// operação divisão
    divisão = numero2 / numero1;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisão);

    return 0;
}