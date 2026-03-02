#include <stdio.h>
#include <stdlib.h>

int main()
{

    char isim1[10];

    printf("Ismini gir gets: ");
    gets(isim1); // eğer klavyeden yapılan giriş 9 bitten (bir bit \0 için) uzun olursa buffer overflow olur bu yöntemde. Varsayılan olarak stdin ile okur

    printf("Girdigin isim gets: %s\n", isim1);



    char isim2[10];

    printf("Ismini gir fgets ile alınıyor: ");
    fgets(isim2, 10, stdin);    // burada 10 karakter sınırı var evet ve sen istersen 100 karakter yaz 9+1 alır gene de fark etmez bunu kullan hep
    // buradaki stdin dediği de standart input yani terminalden düz yazı okuma

    printf("Girdigin isim fgets ile alınıyor: %s", isim2);

    return 0;
}