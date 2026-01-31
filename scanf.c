#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("lütfen sayiyi giriniz:\n");

    scanf("%d",&sayi);    // & olmadan değişkene atayamazsın

    printf("sayimiz:" "%d\n",sayi);  // sonuncu \n i koymazsan çıktının sonunda % oluyor yoksa işlevi yok

    return 0;
}