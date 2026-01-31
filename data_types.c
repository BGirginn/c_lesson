#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int | %d
    double | %lf
    float | %f
    char | %c
    */

    int sayi1 = 15;
    int sayi2 = 10;
    float sayi3 = 10.55;
    double sayi4 = 11.44;
    char harf = 'a'; // tek tırnak kullanmak zorundasın char tanımlarken

    printf("%d\n%d\n%.3f\n%.3lf\nharfim:%c",sayi1,sayi2,sayi3,sayi4,harf);  // birden fazla sayı vesaire için tırnak içinde %d %f falan yazıyorsun her biri için sırayla
    // sayı ya da bastırılacak şeyin alt satıra geçmesi için % \n % kullan.  %.xf yazarsan floatın x kadar basamağını gösterir %.xlf de aynı şelilde çalışır


    return 0;  // main fonksiyonunda bunu yazmazsan sistem otomatik varsayar bunu ama kalan fonksiyonlarda bunu return 0 olsa bile yazmak zorundasın
}
