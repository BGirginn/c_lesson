#include <stdio.h>

int main(void)
{
    int a = 10, b = 3;

    printf("Toplama (+)           : %d\n", a + b);
    printf("Cikarma (-)           : %d\n", a - b);
    printf("Carpma (*)            : %d\n", a * b);
    printf("Bolme (int / int)     : %d\n", a / b);
    printf("Bolme (float)         : %.2f\n", (float)a / b);
    printf("Mod (%%)              : %d\n", a % b);

    int x = 5;
    printf("Once artir (++x)      : %d\n", ++x);
    printf("Sonra artir (x++)     : %d\n", x++);
    printf("Once azalt (--x)      : %d\n", --x);
    printf("Sonra azalt (x--)     : %d\n", x--);

    int y = 7;
    printf("Negatif alma (-y)     : %d\n", -y);

    return 0;
}
