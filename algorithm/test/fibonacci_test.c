#include "common.h"

int main(int argc, char *argv[])
{
    int n;

    printf("input n:");
    scanf("%d", &n);

    //debug("fibonacci(%d): %d", n, fibonacci(n));
    debug("cached_fibonacci(%d): %lld", n, cached_fibonacci(n));
}


