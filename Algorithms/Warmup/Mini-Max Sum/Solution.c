//https://www.hackerrank.com/challenges/mini-max-sum/problem
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int sum = 0;
    long int max = 0, min = 1000000001;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       max = (arr[arr_i]>=max) ? arr[arr_i] : max;
       min = (arr[arr_i]<=min) ? arr[arr_i] : min;
       sum = sum + arr[arr_i];
    }
    printf("%ld %ld", sum - max, sum - min);
    return 0;
}
