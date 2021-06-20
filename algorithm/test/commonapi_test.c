#include "common.h"

int main(int argc, char *argv[])
{
    int arr1[10], arr2[10];
    int i, arr1Len, arr2Len;
    char buf[100+1];

    arr1Len = sizeof(arr1)/sizeof(int);
    for(i=0; i<arr1Len; i+=1) {
        arr1[i] = i+1;
    }

    arr2Len = sizeof(arr2)/sizeof(int);
    for(i=0; i<arr2Len; i+=1) {
        arr2[i] = 1;
    }

    debug("=================================================================");
    debug("print_arr function test! ");
    debug("arr1");
    print_arr(arr1, arr1Len);
    debug("arr2");
    print_arr(arr2, arr2Len);
    debug("=================================================================");

    debug("all_is function test! ");
    debug("arr1 => all_is(arr1, arr1Len, 3); ");
    all_is(arr1, arr1Len, 3) ? debug("TRUE") : debug("FALSE");
    debug("arr2 => all_is(arr2, arr2Len, 1); ");
    all_is(arr2, arr2Len, 1) ? debug("TRUE") : debug("FALSE");
    debug("arr2 => all_is(arr2, arr2Len, 2); ");
    all_is(arr2, arr2Len, 2) ? debug("TRUE") : debug("FALSE");

    debug("=================================================================");

    memset(buf, 0, sizeof(buf));
    decimalToBinary(buf, sizeof(buf)-1, 10);
    debug("decimalToBinary function test! 10 <-> %d", atoi(buf));
    debug("countBinary1 function test! %d count binary 1 is %d", atoi(buf), countBinary1(buf, sizeof(buf)-1));

    
    debug("=================================================================");

    return 0;
}


