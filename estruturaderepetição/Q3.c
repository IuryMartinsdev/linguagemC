#include <stdio.h>
#include <math.h>

int main() {
    int n, div1, div2, resultado;
    printf("Digite um número inteiro de 4 caracteres: ");
    scanf("%d", &n);
    if (n < 1000 || n >= 10000) {
        printf("Valor invalido!");
    } else {
        div1 = n / 100;
        div2 = n % 100;
        resultado = pow(div1 + div2, 2);
        printf("%d", resultado);        if (resultado == n) {
            printf("(%d + %d)² = %d", div1, div2, n);
        } else {
            printf("(%d + %d)² != %d", div1, div2, n);
        }
    }

    return 0;
}
