#include "common.h"

#define ARR_LEN 200

int main(int argc, char *argv[])
{
    int n, m;
    int arr[ARR_LEN];

    printf("input n : ");
    scanf("%d", &n);
    printf("input m : ");
    scanf("%d", &m);
    printf("%d/%d total => %d\n", n, m, partition_print(n, m, arr, 0));
    printf("%d/%d total => %d\n", n, m, cached_partition(n, m));
    printf("%d/%d total => %d\n", n, m, partition2(n));
    printf("%d/%d total => %d\n", n, m, partition2_print(n, arr, 0));
}


