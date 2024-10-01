#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    printf("Digite 5 números inteiros:\n");

    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma total dos números é: %d\n", soma);

    return 0;
}
