#include <stdio.h>

// bu kodun amacı ilk elemanı seçmek sonrasında kalan diziyi taramak ve ilk elemandan küçük varsa küçük ile ilk elemanın yerini değiştirmek. sonra ikinci elemanı seçip aynısını yapmak


int main()
{
    int dizi[5] = {5,3,8,2,1};
    int i, j, minIndex, temp;

    for(i = 0; i < 4; i++)
    {
        minIndex = i;

        for(j = i + 1; j < 5; j++)
        {
            if(dizi[j] < dizi[minIndex])
            {
                minIndex = j;
            }
        }

        temp = dizi[i];
        dizi[i] = dizi[minIndex];
        dizi[minIndex] = temp;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }

    return 0;
}
