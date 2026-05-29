#include <stdio.h>

int soma(int n) {
    int i, resultado = 0;

    for(i = 1; i <= n; i++) {
        resultado += i;
    }

    return resultado;
}

int main() {
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Soma = %d", soma(n));

    return 0;
}