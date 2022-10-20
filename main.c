#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Podaj pierwsza przyprostokatna:");
    scanf("%f", &a);
    printf("Podaj druga przyprostokatna :");
    scanf("%f", &b);
    c = sqrt(a*a + b*b);
    printf("Przeciwprostokatna:%.2f",c);
    printf("proba 45");
}