#include <stdio.h>
int main()
{
    int d1, d2;
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    getchar(); 
    
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2); 
    
    long long day_first = ((long long)d1 * 24 * 3600 + h1 * 3600 + m1 * 60 + s1);
    long long day_end = ((long long)d2 * 24 * 3600 + h2 * 3600 + m2 * 60 + s2);
    long long diff = day_end - day_first;

    long long days = diff / (24 * 3600);
    diff = diff % (24 * 3600);

    long long hour = diff / 3600;
    diff = diff % 3600;

    long long min = diff / 60;
    long long sec = diff % 60;

    printf("%lld dia(s)\n", days);
    printf("%lld hora(s)\n", hour);
    printf("%lld minuto(s)\n", min);
    printf("%lld segundo(s)\n", sec);
    return 0;
}