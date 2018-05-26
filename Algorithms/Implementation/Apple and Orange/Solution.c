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
    int d;
    scanf("%d %d",&m,&n);
    int c1=0, c2=0;
    for (int i=0; i<m; ++i){
        scanf("%d", &d);
        d = a + d;
        if(d>=s && d<=t) ++c1;
    }
    for (int i=0; i<n; ++i){
        scanf("%d", &d);
        d = b + d;
        if(d>=s && d<=t) ++c2;
    }
    printf("%d\n", c1);
    printf("%d", c2);
    return 0;
}
