#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("3. sayiyi giriniz: ");
    scanf("%d", &sayi3);


    if (sayi1>sayi2 && sayi1>sayi3)
    {
        if (sayi2>sayi3)
        {
            printf("sayi1:%d >sayi2:%d >sayi3:%d \n",sayi1,sayi2,sayi3);
        }
        else {
            printf("sayi1:%d >sayi3:%d >sayi2:%d \n",sayi1,sayi3,sayi2);
        }
    }
    
    if (sayi2>sayi1&&sayi2>sayi3)
    {
        if (sayi1>sayi3)
        {
            printf("sayi2:%d >sayi1:%d >sayi3:%d \n",sayi2,sayi1,sayi3);
        }
        else
        {
            printf("sayi2:%d >sayi3:%d >sayi1:%d \n",sayi2,sayi3,sayi1);
        }
    }
    
    if (sayi3>sayi1&&sayi3>sayi2)
    {
        if (sayi1>sayi2)
        {
            printf("sayi3:%d >sayi1:%d >sayi2:%d \n",sayi3,sayi1,sayi2);
        }
        else
        {
            printf("sayi3:%d >sayi2:%d >sayi1:%d \n",sayi3,sayi2,sayi1);
        }
    }
    



    return 0;
}