#include "common.h"

#define ARR_LEN 200

int main(int argc, char *argv[])
{
    int code[ARR_LEN];
    int n;

    while(1)
    {
        debug(" === 그레이코드 n비트값 입력(-1 is quit) === ");
        scanf("%d", &n);
        if(n == -1) break;
        print_gray2(code, n, 0, 0);
    }
    return 0;
}


