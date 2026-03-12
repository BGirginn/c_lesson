#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = calloc(5, sizeof(int)); // mallocdan farklı olarak eleman sayısı,eleman boyutu şeklinde yer ayırıp hepsine 0 yazar

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    }

    free(p);

    //! malloc ve calloc arasındaki kullanım farkı aşağıda. mallocda ayrılan yerin 0 olma garantisi yoktur callocda ise vardır

    int *a;
    int *b;

    a = malloc(5 * sizeof(int)); // malloc ile bellek ayır
    b = calloc(5, sizeof(int));  // calloc ile bellek ayır

    printf("malloc ile ayrilan dizi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\ncalloc ile ayrilan dizi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    free(a);
    free(b);

    int *c = malloc(5 * sizeof(int));
    printf("\n\nrandom malloc çıktısı:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    free(c);

    return 0;
}
