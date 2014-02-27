/*
  Euler no7.c
 
  소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.
  이 때 10,001번째의 소수를 구하세요.

  Created by Yeonju on 2013. 12. 5..
  Copyright (c) 2013 Yeonju. All rights reserved.
*/

#include <stdio.h>

int isPrime(int a) {
    int i = 2;
    for( ; a%i ; i++);
    if( a == i ) return 1;
    else return 0;
}

int no7_main() {
    int i = 3;
    int count = 10000;
    while ( count > 0 ) {
        if (isPrime(i)) count --; i += 2;
    }
    printf("%d\n", i-2);
    
    return 0;
}

//__asm {
//    fld [temp]
//    fsqrt
//    fst [temp]
//};