#ifndef __COMMON_API_H__
#define __COMMON_API_H__

#include "common.h"

int max(int x, int y); 
int min(int x, int y);
int max_arr(const int arr[], const int len);
void swap(int *x, int *y);
void swap_arr(int arr[], int i, int j);
void right_rotate(int arr[], int s, int t);
void right_n_rotate(int arr[], int s, int t, int n); 
void left_rotate(int arr[], int s, int t);
void left_n_rotate(int arr[], int s, int t, int n);
void print_arr(int arr[], int len);
int all_is(int arr[], int len, int num);
int decimalToBinary(char *binary, const int len,  int decimal);
int countBinary1(const char *binary, const int len);

#endif

