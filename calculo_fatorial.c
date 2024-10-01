#include <stdio.h>

int calcular_fatorial(int numero) {
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        int resultado = calcular_fatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}
