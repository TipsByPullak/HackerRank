//https://www.hackerrank.com/challenges/apple-and-orange
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int c1=0, c2=0;
    for (int i=0; i<m; ++i){
        if (apple[i]>=s-a && apple[i]<=t-a)
            ++c1;
    }
    for (int i=0; i<n; ++i){
        if (orange[i]>=s-b && orange[i]<=t-b)
            ++c2;
    }
    printf("%d\n", c1);
    printf("%d", c2);
    return 0;
}
