//https://www.hackerrank.com/challenges/diagonal-difference/problem
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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; ++i){
        sum1 = sum1 + a[i][i];
        sum2 = sum2 + a[i][n-1-i];
    }
    printf("%d", abs(sum1 - sum2));
    return 0;
}
