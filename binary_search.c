#include <stdio.h>

int main()
{
    int dizi[7] = {1,3,5,7,9,11,13}; // sıralı dizi
    int aranan = 9;                  // aranan sayı

    int low = 0;     // dizinin başlangıç indexi
    int high = 6;    // dizinin son indexi
    int mid;         // orta index

    while(low <= high)
    {
        mid = (low + high) / 2;   // orta elemanı bul

        if(dizi[mid] == aranan)   // sayı bulunduysa
        {
            printf("Sayi bulundu. Index: %d\n", mid);
            return 0;
        }

        else if(aranan < dizi[mid]) // aranan sayı ortadan küçükse
        {
            high = mid - 1;        // sol tarafa geç
        }

        else                        // aranan sayı ortadan büyükse
        {
            low = mid + 1;         // sağ tarafa geç
        }
    }

    printf("Sayi dizide yok\n");

    return 0;
}
