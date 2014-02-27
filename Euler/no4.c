/*
  Euler no4.c

 앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.
 두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.
 세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
 
  Created by Yeonju on 2013. 12. 5..
  Copyright (c) 2013년 Yeonju. All rights reserved.
*/

#include <stdio.h>

const int no4_MAX = 999;
int no4_isSymmetric(int a) {
    int i = 0;
    int size = 0;
    char ch[7];
    
//    itoa(a, ch, 7);
//    size = strlen(ch) - 1;
//    
    for( ; i < size/2 ; i++) {
        if ( ch[i] != ch[size-i] )
            return 0;
    }
    return 1;
}
int no4_main() {
    int result = 0;
    int temp = 0;
    int i = no4_MAX;
    int j = no4_MAX;
    for( ; i > 0 ; i --) {
        for( ; j > 0 ; j -- ) {
            temp = i*j;
            if ( no4_isSymmetric(temp) ) {
                printf("%d", temp);
                result = result < temp ? temp : result;
                
            }
        }
    }
    return 0;
}