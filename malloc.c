#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;        // adres tutacak değişken henüz bir yere bağlı değil
    p = malloc(4); // 4 byte yer istedik sonra da ilk bytesinin adresini p ye atadık

    if (!p)
    { // eğer yer verilmediyse bu döngü ile sistemi kesip hatadan koruduk bir nevi try catch gibi düşün
        printf("Bellek ayrilamadi\n");
        return 1;
    }

    *p = 7; // ayrılan yere 7 yaz

    printf("%d\n", *p); // yazdır

    //! EĞER BİR ADRES YAZDIRACAKSAN %p KULLANMAK ZORUNDASIN
    printf("%p\n", p);  // pointerin kendisinin bulunduğu adres. //! direkt pointerin adresini yazdırmak için başına hiçbir şey koyma
    printf("%p\n", &p); // pointerin tuttuğu nesnenin adresi     //! pointerin tuttuğu değişkenin adresini yazdırmak için başına & koy

    free(p); // belleği geri ver

    int *x;
    x = malloc(sizeof(int));
    if (x == NULL) // bellek ayrıldı mı kontrol et
    {
        printf("Bellek ayrilamadi\n");
        return 1;
    }
    *x = 20;
    printf("Deger: %d\n", *x); // değeri yazdır

    free(p); // ayrılan belleği geri ver

    return 0;
}