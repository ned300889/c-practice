#include <stdio.h>

main()
{
    int c;

    c = getchar();
    while ((c = getchar()) != EOF){
        if (c == '\t')
            putchar('tabe');
                if (c == EOF) break;
    putchar(c);
    }
}