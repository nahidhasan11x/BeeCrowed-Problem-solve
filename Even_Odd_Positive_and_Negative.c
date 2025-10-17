#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int count = 0;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= 0 || arr[i] >= 0)
        {
            if (arr[i] % 2 == 0)
            {
                count++;
            }
            else if (arr[i] % 2 != 0)
            {
                a++;
            }
        }
        if (arr[i] > 0)
        {
            b++;
        }
        else if (arr[i] < 0)
        {
            c++;
        }
    }

    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", a);
    printf("%d valor(es) positivo(s)\n", b);
    printf("%d valor(es) negativo(s)\n", c);

    return 0;
}