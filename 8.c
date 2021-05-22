ZADANIE 8 Napisz w C ANSI program, który wczytuje liczbę całkowitą i jeżeli jest ona podzielna
przez 8 to wypisuje komunikat, a jeżeli nie, wypisuje resztę z dzielenia przez 8.

#include "stdio.h"

int main() {
    int input;

    printf("Podaj liczbe: ");
    scanf("%i", &input);

    int mod = input % 8;
    if (mod == 0) {
        printf("%i jest podzielne przez 8", input);
    } else {
        printf("Reszta z dzielenia %i przez 8: %i", input, mod);
    }

    return 0;
}