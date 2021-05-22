ZADANIE 2 Napisz w C ANSI program, który wyświetla w podwójnej ramce na monitorze Twoją
wizytówką. Imię i nazwisko jest stałe, nazwa kierunku wczytywana (informatyka
dowolnymi literami dużymi, małymi lub takimi i takimi), rok studiów (liczba całkowita).
Mają być również wczytywane dwa znaki, z których będą zbudowane ramki.

#include "stdio.h"

int main() {
    char studies[12];
    printf("Podaj kierunek (11 znakow): ");
    fflush(stdin);
    fgets(studies, 12, stdin);

    char studiesYear[5];
    printf("Podaj rok studiow (4 znaki): ");
    fflush(stdin);
    fgets(studiesYear, 5, stdin);
    // scanf("%s", studiesYear);

    printf("Podaj znaki do ramki (2 znaki): ");
    char firstChar, secondChar;
    fflush(stdin);
    scanf("%c%c", &firstChar, &secondChar);

    scanf("%c%c", &firstChar, &secondChar);

    printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", firstChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, firstChar);

    printf("%c%c Imie i nazwisko: Filip Nowakowski %c%c\n", firstChar, secondChar, secondChar, firstChar);
    printf("%c%c Kierunek: %s\t     %c%c\n", firstChar, secondChar, studies, secondChar, firstChar);
    printf("%c%c Rok: %s\t\t\t     %c%c\n", firstChar, secondChar, studiesYear, secondChar, firstChar);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", firstChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, secondChar, firstChar);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar, firstChar);

    return 0;
}