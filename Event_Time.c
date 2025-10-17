#include <stdio.h>
int main()
{
    int d1;
    int d2;
    int h1, m1, s1;
    int h2, m2, s2;
    scanf("Dia %d\n", &d1);
    scanf("%d : %d :%d", &h1, &m1, &s1);

    scanf("Dia %d\n", &d2);
    scanf("%d : %d :%d", &h2, &m2, &s2);

    int day_first = ((d1 * 24 + h1) * 3600 + (m1 * 60) + s1);
    int day_end = ((d2 * 24 + h2) * 3600 + (m2 * 60) + s2);
    int diff = day_first - day_end;
    int days = diff / (24 * 3600);
    diff = diff % (24 * 3600);

    int hour = diff / 3600;
    diff = diff % 3600;

    int min = diff / 60;
    diff = diff % 60;
    int sec = diff;
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hour);
    printf("%d minutos(s)\n", min);
    printf("%d segundo(s)\n", sec);
    return 0;
}