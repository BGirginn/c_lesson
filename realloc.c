#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = malloc(5 * sizeof(int)); // 5 elemanlık dizi
    printf("ilk kisim: \n");
    for(int i=0;i<5;i++)
    {
        p[i] = i+1;
        printf("%d\n",p[i]);  // ilk 5 elemana değer atayan döngü
    }

    // diziyi büyüt (küçültedebilirsin)
    p = realloc(p, 10 * sizeof(int));  // burada ayrılan yer 5 den 10 intlik alana çıkarıldı
    printf("ikinci kisim:\n");
    for(int i=5;i<10;i++)
    {
        p[i] = i+1;
        printf("%d\n",p[i]);  // ikinci 5 lik (yeni açılan) kısıma değer atandı
    }

    printf("full kisim:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n", p[i]);  // tüm liste yazdırıldı
    }

    free(p);

    return 0;
}