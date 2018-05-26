//https://www.hackerrank.com/challenges/plus-minus/problem
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    float p,q,r;
    p=0; q=0; r=0;
    for(int i=0; i<n; ++i){
        if(arr[i] > 0)
            ++p;
        if(arr[i] < 0)
            ++q;
        if(arr[i] == 0)
            ++r;
    }
    printf("%.6f\n%.6f\n%.6f", p/(float)n, q/(float)n, r/(float)n);
    return 0;
}
