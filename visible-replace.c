#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF) {
    // Detect/translate special characters, otherwise output as is.

    switch (c) {
        case '\t': putchar ('\\'); putchar ('t');  break;
        case '\b': putchar ('\\'); putchar ('b');  break;
        case '\\': putchar ('\\'); putchar ('\\'); break;
        default:   putchar (c);
    }
}
}