//https://www.hackerrank.com/challenges/grading
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    for(int i = 0; i < n; ++i){
        if (grades[i]>=38 && grades[i]%5 >2)
            grades[i] = 5 - grades[i]%5 + grades[i];
    }
    for(int result_i = 0; result_i < n; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", grades[result_i]);
    }
    puts("");
    

    return 0;
}
