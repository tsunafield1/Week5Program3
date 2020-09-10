#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n,a;
    int i = 0, v = 0, x = 0, l = 0, c = 0;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        a = j;
        while (a >= 100)
        {
            c++;
            a -= 100;
        }
        if (a / 10 == 9)
        {
            c++;
            x++;
            a -= 90;
        }
        if (a >= 50)
        {
            l++;
            x += ((a - 50) / 10);
            a %= 10;
        }
        if (a / 10 == 4)
        {
            l++;
            x++;
            a -= 40;
        }
        if (a >= 10)
        {
            x += (a / 10);
            a %= 10;
        }
        if (a == 9)
        {
            x++;
            i++;
            a -= 9;
        }
        if (a >= 5)
        {
            v++;
            i += a - 5;
            a = 0;
        }
        if (a == 4)
        {
            i++;
            v++;
            a = 0;
        }
        if (a >= 1)
        {
            i += a;
            a = 0;
        }
    }
    printf("%d %d %d %d %d", i, v, x, l, c);
}
