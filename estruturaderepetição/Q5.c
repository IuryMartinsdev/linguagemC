#include <stdio.h>

int main() {
    float premio1, premio2, div1, div2, aposta1, aposta2, total, valor;
    printf("Digite a a quantia que você apostou: ");
    scanf("%f", &aposta1);
    printf("Digite a quantia que o seu amigo apostou: ");
    scanf("%f", &aposta2);
    printf("Digite o valor do prêmio: ");
    scanf("%f", &valor);
    total = aposta1 + aposta2;
    div1 = aposta1 / total;
    div2 = aposta2 / total;
    premio1 = div1 * valor;
    premio2 = div2 * valor;
    printf("Você receberá: %.2f reais\n", premio1);
    printf("Seu amigo receberá: %.2f reais", premio2);

    return 0;
}
