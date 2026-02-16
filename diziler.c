#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int bora [5]= {1,3,5,7,9};
    printf("%d\n", bora[2]);

    int array [10];
    int i;
    for (i=0; i<10; i++)
    {        
        array[i] = 2*i;
    }
    for (i=0;i<10;i += 4)
    {
        printf("%d\n",array[i]);
    }

    return 0;


}