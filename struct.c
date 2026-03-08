#include <stdio.h>
#include <stdlib.h>

struct Ogrenci
{
    int numara;
    int yas;
    float ortalama;
};

struct Kisi
{
    int yas;
};

struct A
{
    int x;
};

int main()
{

    struct Ogrenci ogr1;

    ogr1.numara = 535;
    ogr1.yas = 22;
    ogr1.ortalama = 3.23;

    printf("Numara: %d\n", ogr1.numara);
    printf("Yas: %d\n", ogr1.yas);
    printf("Ortalama: %f\n", ogr1.ortalama);

    struct Kisi k;
    struct Kisi *p;

    k.yas = 25;

    p = &k;

    printf("%d\n", p->yas);

    struct A a = {7};  // A structundaki x değişkeninin içine 7 değerini atar. a.x = 7; a denk gelir
    struct A *g = &a;  // pointer oluşturup a değişkeninin adresine bağlar

    //! bence daha çok üstteki k ile olanı kullan daha adım adım ve ne olduğu anlaşılıyor

    g->x = 50; 

    printf("%d\n", a.x);

    return 0;
}