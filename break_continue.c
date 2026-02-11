#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
    if (i == 5) {
        continue;
    }
    if (i == 8) {
        break;
    }
    printf("%d\n", i);
    }

    return 0;

}

//? break kendisine en yakın olan döngüyü sonlandırır. continue ise kendisine en yakın olan döngünün o anki iterasyonunu atlar ve bir sonraki iterasyona geçer.
//! burada mesela break if i sonlandırmaz çünkü o bir koşul döngü değil. continue ise 5 i atlamamızı sağlar
