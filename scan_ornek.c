#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int sayi1;
    int sayi2;
    char isim_bas_harf;

    printf("Lütfen 1. sayiyi giriniz:\n");
    scanf("%d", &sayi1);

    printf("Lütfen 2. sayıyı giriniz:\n");
    scanf("%d", &sayi2);

    printf("Lütfen isminizin baş harfini tek karakter olacak şekilde giriniz:\n");
    scanf(" %c", &isim_bas_harf); // 👈 KRİTİK

    printf("birinci sayi: %d\n", sayi1);
    printf("ikinci sayi: %d\n", sayi2);
    printf("ismin baş harfi: %c\n", isim_bas_harf);

    return 0;
}
