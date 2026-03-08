#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *sayi_dosya; // dosyanın adresini tutması için bir pointer oluşturulur. dümdüz pointer yani dosya yazman şart değil
    FILE *yazi_dosya;
    char satir[100]; // buradaki 100 max 100 karakter basabilirim ekrana demek daha fazla yapabilirsin
    int sayi;

    sayi_dosya = fopen("sayi.txt", "r"); // eğer aynı klasörde ise dosya adı yoksa full path. "r" read sadece okuma izni

    while (fscanf(sayi_dosya, "%d", &sayi) != EOF) // dosyadan ilk integeri oku sonra da sayi değişkenine yaz. EOF = end of file. fscanf de değişecek değişkenin başına & koy
    //! eğer bir değişkenin değeri değişiyorsa genelde & kullanılır ama bu printf de falan değil okumada ihtiyaç yok değiştirmede var
    {
        printf("%d\n", sayi);
    }
    fclose(sayi_dosya);

    yazi_dosya = fopen("yazi.txt", "r");
    if (yazi_dosya == NULL)
{
        printf("dosya acilamadi\n");
        return 1;
    } 

    while (fgets(satir, 100, yazi_dosya) != NULL)  // (veri hangi değişken aracılığı ile yazdırılacaksa, okunacak harf sayısı, okunacak dosya)
    {
        printf("%s\n", satir);
    } //! bu döngü dosyadan veri almak için
    fclose(yazi_dosya);

    return 0;
}