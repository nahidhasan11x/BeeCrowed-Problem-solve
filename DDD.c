#include <stdio.h>
int main(void)
{
    int x;
    if (scanf("%d", &x) != 1)
        return 0;

    int num[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char *name[8] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora",
                     "Campinas", "Vitoria", "Belo Horizonte"};
    int found=0;
    for (int i = 0; i < 8; i++)
    {
        if (x == num[i])
        {
            printf("%s\n", name[i]);
            found = 1;
            break;
        }
    }
    if (found!=1)
    {
        printf("DDD not found\n");
    }
    return 0;
}