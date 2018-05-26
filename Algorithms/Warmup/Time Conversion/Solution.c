//https://www.hackerrank.com/challenges/time-conversion/problem
#include<stdio.h>
#include<stdlib.h>

void timeConversion(char s[]) {
    int hh, mm, ss;
    hh = (s[0] - '0')*10 + (s[1] - '0');
    mm = (s[3] - '0')*10 + (s[4] - '0');
    ss = (s[6] - '0')*10 + (s[7] - '0');
    if(s[8] == 'A' && hh == 12) hh = 0;
    if(s[8] == 'P' && (1<=hh && hh<=11)) hh = hh + 12;
    printf("%02d:%02d:%02d", hh, mm, ss);
}
    
int main()
{
    char s[10];
    for(int i = 0; i < 10; ++i)
      scanf(" %c", &s[i]);
    timeConversion(s);
    return 0;
}
