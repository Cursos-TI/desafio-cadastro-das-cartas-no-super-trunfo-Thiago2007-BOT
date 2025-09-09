#include <stdio.h>

int main(){

float nota1, nota2, nota3;
float média;

printf("*** Programa de Cálculo de Média (SUPER BEM FEITO!) ***\n");

printf("Digite a sua primeira nota: ");
scanf("%f", &nota1);

printf("Digite a sua segunda nota: ");
scanf("%f", &nota2);

printf("Digite a sua terceira nota: ");
scanf("%f", &nota3);

média = (nota1 + nota2 + nota3) / 3; // Ou posso usar o "CASTING" = forçar o (FLOAT)

printf("A média é: %.2f\n", média);


return 0;

}