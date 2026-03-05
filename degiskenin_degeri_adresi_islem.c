#include <stdio.h>
#include <stdlib.h>

int carre(int n)
{
    int r = n * n;
    return r;
}

int main()
{

    int x=4,c;
    c=carre(x);
    printf("%d",c);

    return 0;
}