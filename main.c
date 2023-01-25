
#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include "vstup.h"
int main() {
    int cas;
    float A, N;
    do {
        A = vstupCisla("hranu kvadru v metrech");
        N = vstupCisla("rychlost v litrech za sekundu");
        printf("Objem kvadru je %.4f metru krychlovych.\n", objem(A));
        printf("Voda bude pritekat %.4f sekund.\n", casSekundy(objem(A), N));
        cas = (int) casSekundy(objem(A), N);
        printf("Cas: %02d:%02d:%02d\n", cas / 3600,
               (cas - cas / 3600 * 3600) / 60, cas % 60);
    } while (next());
    return 0;
}