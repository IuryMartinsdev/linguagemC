#include <stdio.h>

int main() {
    float preco, desconto;
    int pagamento;
    printf("DIgite o preÃ§o do produto: ");
    scanf("%f", &preco);
    printf("Formas de pagamento:\n|(1) Ã€ vista em dinheiro ou cheque | (2) Ã€ vista no cartÃ£o de crÃ©dito | (3) Dividido em 2 vezes | (4) Dividido em 3 vezes |");
    printf("\nEscolha uma das opÃ§Ãµes acima: ");
    scanf("%d", &pagamento);
    switch (pagamento)
    {
        case 1:
            desconto = preco - preco*0.10;
            printf("Valor do produto com 10%% de desconto: R$ %2.f", desconto);
        break;

        case 2: 
            desconto = preco - preco*0.15;
            printf("Valor do produto com 15%% de desconto: R$ %2.f", desconto);
        break;

        case 3: 
            desconto = preco/2;
            printf("Valor do produto dividido em duas vezes sem juros: R$ %2.f", desconto);
        break;

        case 4:
            desconto = preco/3 + (preco*0.1);
            printf("Valor do produto divido em trÃªs parcelas iguais mais 10%% de juros: R$ %2.f", desconto);
        break;
    }
    return 0;
}
