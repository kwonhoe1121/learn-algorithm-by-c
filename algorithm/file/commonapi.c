#include "commonapi.h"

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


