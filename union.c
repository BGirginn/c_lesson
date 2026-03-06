#include <stdio.h>
#include <stdlib.h>

union A
{
    int x;
    float y;

    // struct ile aynı kullanım mantığı ama asıl fark structta tüm değişkenler ayrı unionda tamamı tek bellek alanı kullanır. 
    // her uniondan aynı anda sadece 1 değişkeni maine çekebilirsin aynı anda birden fazala çekmeye çalışırsan sonuncusu işlem görür
    // union içindeki en büyük değişken bellek alanı unionun genel bellek alanını belirler
};

struct Data
{
    int tip;

    union
    {
        int i;
        float f;
        char c;
    } deger;
}; // struct ve union bu şekilde birlikte kullanılır

int main()
{



    

    return 0;
}