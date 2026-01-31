#include <stdio.h>

int main(void)
{
    int a = 10, b = 5;

    /* KARŞILAŞTIRMA OPERATÖRLERİ */
    printf("a == b  : %d\n", a == b);   // esit mi
    printf("a != b  : %d\n", a != b);   // esit degil mi
    printf("a > b   : %d\n", a > b);    // buyuk mu
    printf("a < b   : %d\n", a < b);    // kucuk mu
    printf("a >= b  : %d\n", a >= b);   // buyuk esit mi
    printf("a <= b  : %d\n", a <= b);   // kucuk esit mi

    /* MANTIKSAL OPERATÖRLER */
    printf("(a > b) && (a > 0) : %d\n", (a > b) && (a > 0)); // VE
    printf("(a > b) || (b > 0) : %d\n", (a > b) || (b > 0)); // VEYA
    printf("!(a > b)           : %d\n", !(a > b));          // DEGIL

    return 0;
}
