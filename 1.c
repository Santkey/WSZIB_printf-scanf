ZADANIE 1 Napisz w C ANSI program, który wczytuje dowolne dwa znaki, a następnie wypisuje
obok siebie duże, drukowane litery A i B. Z tym, że litera A wypisywana jest pierwszym
znakiem wczytanym w programie a litera B drugim. Wysokość liter14 znaków a
szerokość każdej litery powinna wynosić 10 znaków.

#include "stdio.h"

int main() {
    printf("Pierwszy znak: ");
    char firstChar = getchar();

    printf("Drugi znak: ");
    fflush(stdin); // Remove "\n" from input buffer
    char secondChar = getchar();

    // Print "A"
    printf("\n\n%c%c%c%c%c%c%c%c%c%c\n", firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c%c%c%c%c%c%c%c%c%c\n", firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n", firstChar, firstChar);
    printf("%c        %c\n\n", firstChar, firstChar);


    // Print "B"
    printf("%c%c%c%c%c%c%c%c%c%c\n", secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c%c%c%c%c%c%c%c%c%c\n", secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c        %c\n", secondChar, secondChar);
    printf("%c%c%c%c%c%c%c%c%c%c\n", secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar);

    return 0;
}