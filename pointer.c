#include <stdio.h>

 void degistir(int *x)
    {
        *x = 20; // burada bir poınter tanımlandı pointere adres bağlandığında içine 20 yazacak
    }; //! bunları main in dışında tanımlaman lazım

int main()
{

    char c = 'A';
    char *p = &c;

    printf("c'nin adresi: %p\n", &c);
    printf("p'nin tuttugu adres: %p\n", p);     // c nin adresi oluyor bu aslında pointer e string gibi atanan adres türündeki değer
    printf("p'nin gosterdigi deger: %c\n", *p); // son noktadaki değer bu adres değil p nin tuttuğu değişkenin karşılığını gösteriyor
    printf("p'nin kendi adresi: %p\n", &p);     // p kendisi nerede?

        int sayi = 10;        // değişken tanımlama
        printf("%d\n",sayi); // sayinin ilk hali
        degistir(&sayi);      // yukarda tanımlanan pointer e adres bağlandı
        printf("%d\n", sayi); // sayinin adresi pointer a bağlandı ve sonra o adresteki sayı atandı

    return 0;
}