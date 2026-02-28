#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int bora [5]= {1,3,5,7,9};
    printf("%d\n", bora[2]);  // bora dizisinin 2. indexindeki elemanı yazdırır

    int array [10];  // 10 elemanlı bir dizi oluştur
    int i;
    for (i=0; i<10; i++)
    {        
        array[i] = 2*i;  // 10 dan küçük tüm değerleri 2 ile çarpıp sonra da onları array listesinin içine koyan bir döngü
    }
    for (i=0;i<10;i += 4)  // 4=4 demek her seferinde 4 arttırmak
    {
        printf("%d\n",array[i]);  // i yi 0 4 8 yapan ve o indextekini yazdıran bir döngü
    }

    bora [5]= 15; //5. indexteki elemanı 15 yaptım

    return 0;


}