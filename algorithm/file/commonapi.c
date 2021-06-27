#include "commonapi.h"

#define CACHE_LEN 200

int max(int x, int y) {
    return x > y ? x : y;
}

int min(int x, int y) {
    return x > y ? y : x;
}

int max_arr(const int arr[], const int len) {
    int i = 0;
    int max_val;

    max_val = arr[0];
    for(i = 0; i < len-1; i += 1) {
        max_val = max(arr[i], arr[i+1]);
    }
    return max_val;
}

void swap(int *x, int *y) {
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap_arr(int arr[], int i, int j) {
    int tmp;

    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void right_rotate(int arr[], int s, int t) {
    int i, last;

    last = arr[t];
    for(i = t; s < i; i -= 1){
        arr[i] = arr[i-1];
    }
    arr[s] = last;
}

void right_n_rotate(int arr[], int s, int t, int n) {
    int i = 0;
    do{
        debug("right_n_rotate call count %d", i+1);
        right_rotate(arr, s, t);
    }while(n > ++i);
}

void left_rotate(int arr[], int s, int t) {
    int i, first;

    first = arr[s];
    for(i = s; t > i; i += 1){
        arr[i] = arr[i+1];
    }
    arr[t] = first;
}

void left_n_rotate(int arr[], int s, int t, int n) {
    int i = 0;
    do{
        debug("left_n_rotate call count %d", i+1);
        left_rotate(arr, s, t);
    }while(n > ++i);
}

void print_arr(int arr[], int len) 
{
    int i;
    printf("[");
    for(i=0; i<len; i+=1){
        printf(" %d ", arr[i]);
    }
    printf("]\n");
}

int all_is(int arr[], int len, int num) 
{
    int i;
    for(i=0; i<len; i+=1) {
        if(arr[i] != num) return FALSE;
    }
    return TRUE;
}

int diff() {
    return 'A'-'a';
}

int decimalToBinary(char *binary, const int len,  int decimal) 
{
    int i;
    for(i=len-1; i>=0; i-=1) {
        binary[i] = (decimal % 2) + '0';
        decimal = decimal / 2;
    }
    return RC_NRM;
}

int countBinary1(const char *binary, const int len)
{
    int i, cnt;
    cnt = 0;
    for(i=0; i<len; i+=1) {
        if(binary[i] == '1') cnt++;
    }
    return cnt;
}

int factorial(int n) 
{
    if(n == 1) return 1;
    return n * factorial(n-1);
}

long long choose(int n, int r)
{
    long long sum;
    if( r == 0 ) return 1;
    if( n == r ) return 1;
    debug("n: %d, r: %d", n, r);
    return choose(n-1, r-1) + choose(n-1, r);
}

long long cached_choose(int n, int r)
{
    static long long cached[CACHE_LEN][CACHE_LEN];

    if( cached[n][r] > 0 ) return cached[n][r];
    if( r == 0 ) return 1;
    if( n == r ) return 1;

    return cached[n][r] = cached_choose(n-1, r-1) + cached_choose(n-1, r);
}

long long fibonacci(int n)
{
    if(n == 1 || n == 2) return 1;
    debug("n: %d", n);
    return fibonacci(n-1) + fibonacci(n-2);
}

long long cached_fibonacci(int n)
{
    static long long cached_fibo_val[CACHE_LEN];
    if(cached_fibo_val[n] > 0) return cached_fibo_val[n];
    if(n == 1 || n == 2) return cached_fibo_val[n] = 1;
    debug("n: %d", n);
    return cached_fibo_val[n] = cached_fibonacci(n-1) + cached_fibonacci(n-2);
}

int pay(int money, int bills[], int n)
{
    int count = 0, i, t;
    if(n == 1) return money % bills[0] == 0 ? 1 : 0;
    t = money / bills[n - 1];
    for(i=0; i<=t; i+=1) count += pay(money - bills[n - 1] * i, bills, n-1);
    return count;
}

int partition(int n, int m) 
{
    int count = 0, i;

    if(n < m) m = n;
    if(n == 0) return 1;

    for(i=1; i<=m; i+=1) {
        count += partition(n-i, i);
    }
    return count;
}

int partition_print(int n, int m, int arr[], int arr_len)
{    
    int count = 0, i;

    if(n < m) m = n;
    if(n == 0) {
        print_arr(arr, arr_len);
        return 1;
    }

    for(i=1; i<=m; i+=1) {
        arr[arr_len] = i;
        count += partition_print(n-i, i, arr, arr_len+1);
    }
    return count;
}

int cached_partition(int n, int m) 
{   
    static int cached[CACHE_LEN][CACHE_LEN];
    int count = 0, i;

    if(n < m) m = n;
    if(cached[n][m]) return cached[n][m];
    if(n == 0) return cached[n][m] = 1;

    for(i=1; i<=m; i+=1) {
        count += cached_partition(n-i, i);
    }
    return cached[n][m] = count;
}

int partition2(int n)
{
    int count = 0, i;
    for(i=1; i<n; i+=1) {
        count += partition2(n-i);
    }
    debug("partition2(%d)", n);
    return count + 1;
}

int partition2_print(int n, int arr[], int arr_len)
{
    int count = 0, i;
    if(n == 1) {
        print_arr(arr, arr_len);
    }
    for(i=1; i<n; i+=1) {
        arr[arr_len] = i;
        count += partition2_print(n-i, arr, arr_len+1);
    }
    return count + 1;
}


