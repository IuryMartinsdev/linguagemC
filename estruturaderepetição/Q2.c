#include <stdio.h>

int main() {
    int soma1, soma2, div1,div2, div3, dia, mes, ano;
    printf("Digite sua data de nascimento (dia/mês/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    soma1 =  (dia*100 + mes) + ano;
    div1 = soma1 / 100;
    div2 = soma1 % 100;
    soma2 = div1 + div2;
    div3 = soma2 % 5;
    if(div3 == 0) {
        printf("Tímido");
    } else if(div3 == 1){
        printf("Sonhador");
    } else if(div3 == 2){
        printf("Paquerador");
    } else if(div3 == 3){
        printf("Atraente");
    } else{
        printf("Irresistível");
    }

    return 0;
}
