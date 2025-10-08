#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    int m = (h1 - h2) * 60 + (m1 - m2);
    if (m < 0)
    {
        m = -m;
    }

    int h = m / 60;
    m %= 60;
    printf("Difference: %d hrs %d mins", h, m);
    return 0;
}