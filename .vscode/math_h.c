#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double x = 3.7;
    double y = -3.7;
    int z = -10;

    // CEIL → Yukarı yuvarlar
    printf("ceil(3.7) = %.2f\n", ceil(x));
    printf("ceil(-3.7) = %.2f\n\n", ceil(y));

    // FLOOR → Aşağı yuvarlar
    printf("floor(3.7) = %.2f\n", floor(x));
    printf("floor(-3.7) = %.2f\n\n", floor(y));

    // SQRT → Karekok
    printf("sqrt(25) = %.2f\n\n", sqrt(25));

    // POW → Üs alma
    printf("pow(2,3) = %.2f\n\n", pow(2,3));

    // ABS → int mutlak değer
    printf("abs(-10) = %d\n\n", abs(z));

    // FABS → double mutlak değer
    printf("fabs(-3.7) = %.2f\n\n", fabs(y));

    // ROUND → En yakın tam sayıya yuvarlar
    printf("round(3.7) = %.2f\n", round(x));
    printf("round(-3.7) = %.2f\n\n", round(y));

    // BONUS matematik fonksiyonları
    printf("sin(90 derece) = %.2f\n", sin(90 * M_PI / 180));
    printf("cos(0) = %.2f\n", cos(0));
    printf("log(10) = %.2f\n", log(10));     // doğal log (ln)
    printf("exp(1) = %.2f\n", exp(1));       // e^1

    return 0;
}
