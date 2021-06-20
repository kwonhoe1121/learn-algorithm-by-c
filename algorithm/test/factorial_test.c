#include "common.h"

#define N 10

int main(int argc, char *argv[])
{
    int num;
    debug("factorial number : ");
    scanf("%d", &num);
    debug("factorial %d! = %d", num, factorial(num));
    return 0;
}


