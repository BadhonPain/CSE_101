#include <stdio.h>

int main()
{
    char x;
    int n;
    scanf("%c %d", &x, &n);
    x -= 'A';
    x = (x + n) % 26;
    x += 'A';
    printf("%c", x);
    return 0;
}