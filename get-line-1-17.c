#include <stdio.h>
#define MAXLINE 1000 
#define OVER    80

int my_getline(char line[], int maxline);
int well_over(char start[], char end[]);
void copy(char to[], char from[]);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            if (len > OVER) {
                printf("%s", longest);
            }
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int my_fgetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int well_over(char start[], char end[]);
{
    int i;

    i = 0;
    while ((start[i] = end[i] != '\0'))
}
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}