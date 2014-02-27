/*
 Euler main.c
 
 no7 : isPrime, no7_main()-10001번째 소수를 찾음
 no8 :
 no13 : 50자리수 100개를 다 더했을 때 맨 앞의 10자리 수를 구하라
 no14 : 콜라츠 추측 Collatz Conjecture이라고 하며, 이런 수들을 우박수 hailstone sequence라 할때 1000000아래의 수 중 가장 긴 수를 구한다
 
 Created by Yeonju on 2013. 12. 5..
 Copyright (c) 2013년 Yeonju. All rights reserved.
 */

#include <stdio.h>
#include <math.h>
#include <time.h>


int main(int argc, const char * argv[])
{
    
    // insert code here...
    printf("Hello, World!\n");
    clock_t start = clock();
    no20_main();
    
    clock_t end = clock();
    printf( "\n%ldms", (end-start)*1000/CLOCKS_PER_SEC);
    printf( "\t%ldus \n", (end-start)*1000000/CLOCKS_PER_SEC);
    
    
    return 0;
}

