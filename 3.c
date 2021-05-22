ZADANIE 3 Napisz w C ANSI program, który wyświetla w ramce szachownicę 5x5 i numeruje
ciemne pola. Ramka ma być wykreślana dowolnym znakiem, wczytywanym z klawiatury
po uruchomieniu programu. Pole szachownicy ma mieć wymiary 5 na 4 znaki. Ciemne
pola mają być wypełnione dowolnym znakiem wczytywanym (przy każdym uruchomieniu
programu) z klawiatury.

#include "stdio.h"

int main() {
    char z1;
    char r1;

    printf("Wpisz znak: \n");
    scanf("%c%c",&z1,&r1);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c@.@",r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1);

    printf("\n%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);

    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);

    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c%c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);

    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);
    printf("%c     %c%c%c%c%c      %c%c%c%c%c      %c\n",r1,z1,z1,z1,z1,z1,z1,z1,z1,z1,z1,r1);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1,r1);

    return 0;
}