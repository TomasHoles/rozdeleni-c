#include "vstup.h"

int next() {
    printf("Pro pokracovani stisknete enter.");
    if (getchar() == '\n') {
        return 1;
    } else {
        return 0;
    }
}

float vstupCisla(const char *text) {
    float cislo;
    int pocetZnaku;
    do {
        printf("Zadej %s: ", text);
        scanf("%f", &cislo);
        pocetZnaku = 0;
        while (getchar() != '\n') {
            pocetZnaku++;
        }
        if (pocetZnaku != 0) {
            printf("Nezadal jsi realne cislo. Zadej znovu.\n");
        } else if (cislo <= 0) {
            printf("Vstupni hodnota musi byt kladna. Zadejte znovu.\n");
        }
    } while (pocetZnaku != 0 || cislo <= 0);
    return cislo;
}

float objem(float a) {
    return a * a * VYSKA;
}

float casSekundy(float objem, float litry) {
    return objem / (litry / 1000.0);
}
