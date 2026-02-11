#include <stdio.h>

int main() {
    float a, b, sonuc;
    char islem;

    printf("Birinci sayiyi gir: ");
    scanf("%f", &a);

    printf("Ikinci sayiyi gir: ");
    scanf("%f", &b);

    printf("Islem sec (+  -  *  /): ");
    scanf(" %c", &islem);   // başındaki boşluk önemli!

    switch(islem) {

        case '+':
            sonuc = a + b;
            printf("Sonuc: %.2f\n", sonuc);
            break;

        case '-':
            sonuc = a - b;
            printf("Sonuc: %.2f\n", sonuc);
            break;

        case '*':
            sonuc = a * b;
            printf("Sonuc: %.2f\n", sonuc);
            break;

        case '/':
            if(b == 0) {
                printf("0'a bolme hatasi!\n");
            } else {
                sonuc = a / b;
                printf("Sonuc: %.2f\n", sonuc);
            }
            break;

        default:
            printf("Gecersiz islem!\n");
    }

    return 0;
}
