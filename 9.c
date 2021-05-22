ZADANIE 9 Napisz w C ANSI program, który wczytuje trzy liczby całkowite i wypisuje je w
kolejności rosnącej.

#include "stdio.h"

int main() {
    int i1, i2, i3;

    printf("Podaj zmienna 1: ");
    scanf("%i", &i1);
    fflush(stdin);

    printf("Podaj zmienna 2: ");
    scanf("%i", &i2);
    fflush(stdin);

    printf("Podaj zmienna 3: ");
    scanf("%i", &i3);


    if (i1 < i2 && i1 < i3) {
        printf("%i, %i, %i",
               i1,
               i2 < i3 ? i2 : i3,
               i2 < i3 ? i3 : i2
        );
    }
    else if (i2 < i1 && i2 < i3) {
        printf("%i, %i, %i",
               i2,
               i1 < i3 ? i1 : i3,
               i1 < i3 ? i3 : i1
        );
    }
    else if (i3 < i1 && i3 < i2) {
        printf("%i, %i, %i",
               i3,
               i1 < i2 ? i1 : i2,
               i1 < i2 ? i2 : i1
        );
    }

    return 0;
}