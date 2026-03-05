#include <stdio.h>
#include <stdlib.h>


//! Bir c programının çalışmasındaki işleme sırası şöyledir: 
// 1. preprocessor: sistem önce # içeren satırları işler
// 2. Compiler çalışır
// 3. Program oluşur

// iki tip macro vardır: Object-like macros like #define PI 3.14, function-like macros like #define circleArea(r) (PI*r*r)
// predefined macros: ön tanımlı macrolar halihazırda varolan macrolar
// __DATE__ : current date
// __FILE__ : file path ama derleyiciye verdiğin çıktı ile alakalı gcc macro.c dersen macro.c çıkar
// __LINE__ : current line number etc. 
//! bunlar için define kullanmıyoruz default var

#define PI 3.14 // pi sayısının değerini 3.14 atar
#define circleArea(r)  (PI*r*r)  //function-based 

int main()
{

    printf("%f\n",circleArea(5));  // bu şekilde kullanabilirsin ya da ayrı yerde printf olmadan da çağırırsın düz function işte
    printf("file:%s\n",__FILE__);
    printf("file:%s\n",__FILE_NAME__);
    printf("file:%s\n",__DATE__);
    printf("file:%d\n",__LINE__);
    

    return 0;
}