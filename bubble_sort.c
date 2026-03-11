#include <stdio.h>

int main()
{
    int dizi[5] = {5, 2, 4, 1, 3};
    int i, j, temp;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(dizi[j] > dizi[j + 1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;  // burada aslında yapılan şey 3 değişken üretip ilk iki sayıyı değişkenlere verip kıyaslama yapıp üçgenlemek
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }

    return 0;
}
