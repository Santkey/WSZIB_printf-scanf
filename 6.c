ZADANIE 6 Napisz w C ANSI program, który wczytuje cztery liczby zmiennoprzecinkowe i jeżeli:
a)ich iloczyn jest mniejszy od 100, ale różny od 0, to go wypisuje, b)ich suma jest
większa od 200, to wypisywana jest suma c)jedna z nich jest zerem, to wypisywany jest
odpowiedni komunikat d) jeżeli nie występuje żadne z powyższych wypisuje komunikat
„bledne dane”.

#include "stdio.h"

int main() {
    float f1, f2, f3, f4;

    printf("Podaj zmienna 1: ");
    scanf("%f", &f1);
    fflush(stdin);

    printf("Podaj zmienna 2: ");
    scanf("%f", &f2);
    fflush(stdin);

    printf("Podaj zmienna 3: ");
    scanf("%f", &f3);
    fflush(stdin);

    printf("Podaj zmienna 4: ");
    scanf("%f", &f4);

    float product = f1 * f2 * f3 * f4;
    float sum = f1 + f2 + f3 + f4;
    if (product < 100 && product != 0) {
        printf("Iloczyn: %f", product);
    } else if (sum > 200) {
        printf("Suma: %f", sum);
    } else if (f1 == 0 || f2 == 0 || f3 == 0 || f4 == 0) {
        printf("Jedna ze zmiennych jest rowna 0");
    } else {
        printf("Bledne dane");
    }

    return 0;
}
