//https://www.hackerrank.com/challenges/time-conversion
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    if (s[8] == 'A'){
        if(s[0]=='1' && s[1]=='2'){
            s[0]='0';
			s[1]='0';
		}
        s[8] = '\0';
    }
    else {
		if(s[0]=='1' && s[1]=='2'){
			s[8] = '\0';
			return s;
		}
        char t[3];
        t[0] = s[0];
        t[1] = s[1];
        t[2] = '\0';
        int p;
        p = atoi(t);
        p = (p+12)%24;
        int length = snprintf( NULL, 0, "%d", p );
        char* tn = (char *)malloc( 3 );
        snprintf( tn, length + 1, "%d", p );
        s[0] = tn[0];
        s[1] = tn[1];
        s[8] = '\0';
    }
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    //int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
	//fflush(stdin);
	//getchar();
    return 0;
}
