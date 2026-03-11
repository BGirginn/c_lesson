#include <stdio.h>

int main()
{
    int dizi[5] = {4, 7, 2, 9, 5}; // arama yapılacak dizi
    int aranan = 9;                // aradığımız sayı
    int i;
    int bulundu = 0;               // bulundu mu kontrolü

    for(i = 0; i < 5; i++)         // dizinin tüm elemanlarını kontrol et
    {
        if(dizi[i] == aranan)      // eğer aranan sayıya eşitse
        {
            printf("Sayi bulundu. Index: %d\n", i);
            bulundu = 1;           // bulundu olarak işaretle
            break;                 // döngüyü durdur
        }
    }

    if(bulundu == 0)               // hiç bulunmadıysa
    {
        printf("Sayi dizide yok\n");
    }

    return 0;
}
