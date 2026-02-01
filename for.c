#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        int i;
        for (i = 0; i < 5; i++)
        {
            printf("%d\n",i);
        }
    */

    int sayi;
    int i, toplam = 0;
    printf("lütfen sayi giriniz:\n");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++)
    {
        toplam += i;
    }
    
printf("toplam: %d\n",toplam);

    return 0;
}