#include <stdio.h>

int main()
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

    printf("Baslangic degeri      : %d\n", a);

    a = 20;
    printf("a = 20                : %d\n", a);

    a += 5; // a = a + 5
    printf("a += 5                : %d\n", a);

    a -= 3; // a = a - 3
    printf("a -= 3                : %d\n", a);

    a *= 2; // a = a * 2
    printf("a *= 2                : %d\n", a);

    a /= 4; // a = a / 4
    printf("a /= 4                : %d\n", a);

    a %= 3; // a = a % 3
    printf("a %%= 3               : %d\n", a);

    return 0;
}
