#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    float x1, x2;
    printf("Digite os valores de a, b e c (ax² + bx + c):\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);                         
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x' = %.2f\n", x1);
        printf("x'' = %.2f", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("x' = x'':\n");
        printf("x = %.2f", x1);
    } else {
        printf("A equação não possui raízes reais.");
    }

    return 0;
}
