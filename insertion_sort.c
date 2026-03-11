#include <stdio.h>  // printf fonksiyonunu kullanabilmek için gerekli kütüphane

int main()
{
    int dizi[5] = {5, 3, 8, 2, 1}; // sıralanacak dizi
    int i, j, key;                 // i ve j döngü değişkenleri, key yerleştirilecek elemanı tutar

    // insertion sort algoritması
    for(i = 1; i < 5; i++)   // ikinci elemandan başlayarak dizinin sonuna kadar ilerler
    {
        key = dizi[i];       // sıralı kısma yerleştirilecek elemanı al
        j = i - 1;           // sıralı kısmın son elemanının indeksini al

        // key'den büyük olan elemanları sağa kaydır
        while(j >= 0 && dizi[j] > key)
        {
            dizi[j + 1] = dizi[j]; // elemanı bir sağa kaydır
            j--;                   // bir önceki elemana geç
        }

        // key'i doğru yerine yerleştir
        dizi[j + 1] = key;
    }

    // sıralanmış diziyi yazdır
    printf("Siralanmis dizi:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]); // dizinin elemanlarını ekrana yazdır
    }

    return 0; // program başarıyla bitti
}
