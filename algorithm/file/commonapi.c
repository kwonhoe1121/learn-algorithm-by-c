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



