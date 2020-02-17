/**
 * EUCLID1.C : Implementation of Euclid's aligorithm 1
 *
 */
#include <stdio.h>

/* 최대공약수 성질 이용 */
int get_gcd(int u, int v)
{
    int t;

    while(u) //u가 0이면 탈출&& 그 때의 v값이 최대공약수
    {
        if(u < v) {
            t = u; u = v; v = t; // u가 v보다 작으면 서로 교환
        }
        u = u - v;
    }
    return v;
}

/* 나머지 연산자 성질 이용 */
int gcd_modulus(int u, int v)
{
    int t;
    while(v)
    {
        t = u % v;
        u = v;
        v = t;
    }
    return u;
}

/* 재귀호출 이용 */
int gcd_recursion(int u, int v)
{
    if (v == 0)
        return u;
    else
        return gcd_recursion(v, u % v);
}

int main(void)
{
    int u, v;

    puts("EUCLID1 : Get GCD of two positive integer ");
    puts("          input 0 to end program");

    while(1)
    {
        fputs("Input two positive integer (num1 num2) -> ", stdout);
        scanf("%d %d", &u, &v);

        if(u < 0 || v < 0) continue;

        if(u == 0 || v == 0) break;

        printf("GCD of %d and %d is %d.", u, v, get_gcd(u, v));
        printf("GCD of %d and %d is %d.", u, v, gcd_modulus(u, v));
        printf("GCD of %d and %d is %d.", u, v, gcd_recursion(u, v));
    }
}


