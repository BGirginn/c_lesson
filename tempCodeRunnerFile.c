#include <stdio.h>
#include <stdlib.h>

// fonksiyon kendini tekrar tekrar çağırır özyinelemeli yani

int faktoriyel(int n)
{
    if (n == 0) // ne zaman duracağına dair koşul burada. n değeri 0 olunca return 1 ile hata kodu verir ve keser bu şekilde tüm değerler ile işlem yapar
        return 1;

    return n * faktoriyel(n - 1); // burada iç içe bir sistem var
}

int toplama(int sayi)
{
    if (sayi == 0)
        return 0;

    return sayi + toplama(sayi - 1);
}

int main()
{
    int sonuc = faktoriyel(5);
    printf("%d", sonuc);

    int sayi;
    int sonuc;

    printf("0'a kadar toplama yapmak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    sonuc = toplama(sayi);

    printf("Sonuc: %d\n", sonuc);

    return 0;
}