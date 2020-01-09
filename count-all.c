#include <stdio.h>

main()
{
    int c, nl, bl, tb;

    nl = bl = tb = 0;

    while ((c = getchar()) != EOF )
        if (c == '\n'){
            ++nl;
        }
        else if (c == '\t'){
            ++tb;
        }
        else if (c == ' '){
            ++bl;
        }
    printf("There are %d new lines %d tabs and %d blank lines\n", nl, tb, bl);
}
