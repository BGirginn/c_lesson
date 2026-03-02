#include <stdio.h>
#include <string.h>


int main()
{

    char bora[]={'b','o','r','a','\0'};  // sondaki \0 bir dizinin bittiğini gösterir
    // normalde char sadece 1 harf tutar evet ama aynı zamanda tamamı 1 harften oluşan bir dizi de tutabilir böylece bir kelimeyi tutar 
    
    char hira[]="hira";  //üsttekinin kısa kullanımı ama birebir aynısını yapar 

    //! printf("%s \n", hira,"\n",bora); ile birden fazla yazdıramazsın
    printf("%s\n%s\n", hira,bora);  // birden fazla şeyi yazdırmak için kaç tane ise o kadar %s/n lazım (s değişiyor türe göre)

    bora[1]='i';  // char içindeki bir harfi değiştirmek için

    printf("%s \n",bora);

    printf("karakter dizisinin boyutu: %lu\n",strlen(bora));  // karakter dizisi boyutu için

     // strlen → kaç harf var?
    printf("strlen(bora) = %lu\n", strlen(bora));
    // çıktı: 4

    // strcmp → tamamen aynı mı?
    printf("strcmp(bora, hira) = %d\n", strcmp(bora, hira));
    // 0 değil çünkü aynı değiller

    // strncmp → ilk 1 harf aynı mı?
    printf("strncmp(bora, hira, 1) = %d\n", strncmp(bora, hira, 1));
    // b ile h farklı → 0 değil

    // strcpy → kopyala
    strcpy(hira, "bora");  
    printf("hira kopyalandı: %s\n", hira);
    // artık hira = bora

    printf("%s\n" ,hira);
    // strcat → sona ekle
    strcat(bora, "123");   //! dikkat: yer yetmezse patlar
    printf("bora yeni hali: %s\n", bora);

        // strrev → stringi ters çevirir
    strrev(bora);
    printf("strrev sonucu: %s\n", bora);
    // çıktı: arob

    // strlwr → tüm harfleri küçük yapar
    strcpy(bora, "BoRa");
    strlwr(bora);
    printf("strlwr sonucu: %s\n", bora);
    // çıktı: bora

    // strupr → tüm harfleri büyük yapar
    strcpy(bora, "BoRa");
    strupr(bora);
    printf("strupr sonucu: %s\n", bora);
    // çıktı: BORA

    // strstr → bir string içinde arama yapar
    char metin[] = "merhaba bora";
    char *sonuc;

    sonuc = strstr(metin, "bora");
    printf("strstr sonucu: %s\n", sonuc);
    // çıktı: bora
    // (bulduğu kelimenin başladığı yerden itibaren yazdırır)

}