#include <stdio.h>
#include <stdlib.h>


void tekcift(int bora)
{
    if (bora % 2 == 0)
    {
        printf("girdiğiniz %d sayisi bir çift sayidir\n", bora);
    }
    else
    {
        printf("girdiğiniz %d sayisi bir tek sayidir\n", bora);
    }
}


int main()
{

    int sayi;
    printf("Lütfen sayi giriniz: \n");
    scanf("%d", &sayi);  // dışarıdan bu şekilde değer alıyoruz


    /*
    if (sayi % 2 == 0)
    {
        printf("girdiğiniz %d sayisi bir çift sayidir\n", sayi);  // cümle içinde bir değişkeni bu şekilde yazdırıyoruz
    }
    
    else
    {
        printf("girdiğiniz %d sayisi bir tek sayidir\n", sayi);
    }
    */

    
    tekcift(sayi);

    return 0;
}
