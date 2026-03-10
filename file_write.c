#include <stdlib.h>
#include <stdio.h>

//? fprintf = dosyanın içine yazmak için her türdeki veriyi yazmak için yani başta f varsa o file anlamına geliyor.
//? fputs sadece string tipi yazmak için
//? fputc sadece tek karakter yani char yazmak istersen kullanılır
/*  | mod  | anlamı          |
    | ---- | --------------- |
    | "w"  | yaz ve sıfırla  |
    | "a"  | sona ekle       |
    | "r"  | sadece oku      |
    | "w+" | oku + yaz       |
    | "a+" | oku + sona ekle | */


int main()
{
    FILE *dosya;
    char veri[100];
    int sayi;

    dosya = fopen("veri2.txt", "w"); // aynı klasördeki dosyayı bul, yoksa oluştur

    fprintf(dosya, "Deneme yazısı\n"); // dosyanın içine yazar
    fprintf(dosya, "Bora\n");
    fprintf(dosya, "Hira\n");
    fprintf(dosya, "deneme 2\n");

    fclose(dosya); // yazma işlemi bittikten sonra dosyayı kapat

    dosya = fopen("veri2.txt", "r"); // dosyayı tekrar aç, bu sefer okuma modunda

    if (dosya == NULL) // dosya açılamadıysa kontrol
    {
        printf("dosya acilamadi\n");
        return 1;
    }

    while (fgets(veri, 100, dosya) != NULL) 
    // veri -> okunacak satırın konulacağı değişken
    // 100 -> maksimum okunacak karakter sayısı
    // dosya -> okunacak dosyanın pointerı
    {
        printf("%s", veri);  // burada \n kullanırsan iki tane boşluk bırakır cünkü dosyada veriler zaten uygun satırlarda senin ayırmana gerek yok
    } // bu döngü dosyadan satır satır veri almak için

    fclose(dosya); // dosya işlemi bitince kapat

    return 0;
}