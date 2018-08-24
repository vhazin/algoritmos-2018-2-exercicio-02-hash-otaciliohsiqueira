#include <stdio.h>

int main(void)
{
    unsigned int t = 0;
    scanf("%u", &t);
    while (t--)
    {
        unsigned long long a = 0, b = 0, x = 0, n = 0, c = 0, d = 0, m=0, contador = 0;
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
        for(unsigned long long i = 0; i <= n; i++)
        {
            unsigned long long hash_function = (a*(x+i) + b) % m;
            if ((c <= hash_function) && (hash_function <= d))
            {
                contador++;
            };
        };
        printf("%llu\n", contador);
        contador = 0;
    };
    return 0;
}
