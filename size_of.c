#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int bora = 20;

    printf("değişkenin boyutu: %lu\n" , sizeof(bora));   // sizeof için %d değil %lu veya %zu kullanılır

    size_t s = sizeof(bora);
    printf("%zu\n", s);

    //! ikisi de değişkenin boyutunu saklar ama size_t ye atayarak yapmak daha güvenli bi yöntemdir
    //? printf("int hafizada %zu byte yer tutar\n", sizeof(int)); burada % yazıldığı zaman virgülden sonraki sizeof veya int sayi veya neyse onu yazar sistem
}