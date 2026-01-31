#include <stdio.h>
#include <stdlib.h>
#define pi 3.14 // bu şekilde public ve değiştirilemez bir değişken atayabiliriz 

int main () {


    const int sayim = 15;   // constlar sonradan müdahale edilemez salt okunur değişkenlerdir
    // sayim = 10; yazarsan burada sistem direkt hata verir ve der ki sayim can not modified variable
    printf("%.2f\n",pi);
    return 0;
}