ZADANIE 4 Napisz w C ANSI program, który rozpoznaje, czy wczytywany znak jest cyfrą i jeżeli
wystąpi taka sytuacja mnoży ją przez 12 i wypisuje wynik. Jeżeli nie, to wypisywany jest
odpowiedni komunikat.

#include "stdio.h"

int main() {
    printf("Podaj znak: ");
    char Char;
    scanf("%c", &Char);

    if (Char >= 48 && Char <= 57) {
        printf("Znak jest cyfra | %c * 12 = %i", Char, ((int)Char) * 12);
    } else {
        printf("Znak NIE jest cyfra");
    }

    return 0;
}