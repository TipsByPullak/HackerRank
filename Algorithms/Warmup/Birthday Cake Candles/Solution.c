//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int max = 0, count = 0, h, n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &h);
         if (h==max)
            ++count;
        if (h>max){
            max = h;
            count = 1;
        }
    }
    if (max != 0)
        printf("%d", count);
}
