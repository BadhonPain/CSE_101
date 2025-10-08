#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int temp_1 = a;
    a = b;
    b = temp_1;
    int temp_2 = a; // we can also use 'b' instead 'a'
    a = c;
    c = temp_2;
    printf("%d %d %d", a, b, c);
    return 0;
}