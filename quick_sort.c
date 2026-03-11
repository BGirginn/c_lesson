#include <stdio.h>

// iki sayının yerini değiştiren fonksiyon
void swap(int *a, int *b)
{
    int temp = *a;  // geçici değişken
    *a = *b;        // a'ya b'nin değerini ver
    *b = temp;      // b'ye eski a değerini ver
}

// partition fonksiyonu:
// pivot seçer, küçükleri sola büyükleri sağa koyar
int partition(int dizi[], int low, int high)
{
    int pivot = dizi[high];  // son elemanı pivot seçiyoruz
    int i = low - 1;         // küçük elemanların son indeksini tutar

    for(int j = low; j < high; j++)
    {
        // eğer eleman pivot'tan küçük veya eşitse sola alınır
        if(dizi[j] <= pivot)
        {
            i++;
            swap(&dizi[i], &dizi[j]);
        }
    }

    // pivot'u doğru yerine koy
    swap(&dizi[i + 1], &dizi[high]);

    return i + 1; // pivot'un yeni indeksini döndür
}

// quick sort fonksiyonu
void quickSort(int dizi[], int low, int high)
{
    if(low < high) // en az 2 eleman varsa devam et
    {
        int pi = partition(dizi, low, high); // pivot'un yerini bul

        // pivot'un sol tarafını sırala
        quickSort(dizi, low, pi - 1);

        // pivot'un sağ tarafını sırala
        quickSort(dizi, pi + 1, high);
    }
}

int main()
{
    int dizi[] = {5, 2, 8, 1, 3};
    int n = 5;

    quickSort(dizi, 0, n - 1); // tüm diziyi sırala

    printf("Siralanmis dizi:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", dizi[i]);
    }

    return 0;
}
