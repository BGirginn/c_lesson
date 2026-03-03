#include <stdio.h>
#include <stdlib.h>
void toplama(int topla1, int topla2)
{
    int toplam = topla1 + topla2;
    printf("işlem sonucu : %d\n", toplam);
}

void carpma(int carp1, int carp2)
{
    int sonuc = carp1 * carp2;
    printf("işlem sonucu : %d\n", sonuc);
}

void bolme(int bolunen, int bolen)
{
    float sonuc = bolunen / bolen;
    printf("işlem sonucu : %f\n", sonuc);
}

void cikarma(int sayi1, int sayi2)
{
    int sonuc = sayi1 - sayi2;
    printf("işlem sonucu : %d\n", sonuc);
}

int main()
{
    int sayi1, sayi2, islem, cikis = 0;

        printf("birinci sayiyi giriniz: ");
        scanf("%d", &sayi1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d", &sayi2);




    while (cikis == 0)
    {

        printf("yapmak istediğiniz işlemi seçiniz:\n 1. toplama\n 2. çarpma \n 3. bölme \n 4. çıkarma\n cikis icin 0'a basiniz\n");
        scanf("%d", &islem);
        switch (islem)
        {
        case 1:
            toplama(sayi1, sayi2);
            break;
        case 2:
            carpma(sayi1, sayi2);
            break;
        case 3:
            bolme(sayi1, sayi2);
            break;
        case 4:
            cikarma(sayi1, sayi2);
            break;
        case 0:
            cikis = 1;
            break;
        default:
            printf("lütfen 4 işlemden birini seçiniz. belanızı sikmim\n");
            break;
        }
    }

    return 0;
}