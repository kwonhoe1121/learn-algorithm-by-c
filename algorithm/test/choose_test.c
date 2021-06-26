#include "common.h"

int main(int argc, char *argv[])
{
    int n, r;

    printf("input n: ");
    scanf("%d", &n);
    printf("input r: ");
    scanf("%d", &r);

    //printf("nCr => %dC%d = %lld\n", n, r, choose(n, r));
    printf("nCr => %dC%d = %lld\n", n, r, cached_choose(n, r));
}


