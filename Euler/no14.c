//
//  no14.c
//  Euler
//
//  Created by Yeonju on 2014. 1. 7..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//
//양의 정수 n에 대하여, 다음과 같은 계산 과정을 반복하기로 합니다.
//
//n → n / 2 (n이 짝수일 때)
//n → 3 n + 1 (n이 홀수일 때)
//
//13에 대하여 위의 규칙을 적용해보면 아래처럼 10번의 과정을 통해 1이 됩니다.
//
//13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
//아직 증명은 되지 않았지만, 이런 과정을 거치면 어떤 수로 시작해도 마지막에는 1로 끝나리라 생각됩니다.
//(역주: 이것은 콜라츠 추측 Collatz Conjecture이라고 하며, 이런 수들을 우박수 hailstone sequence라 부르기도 합니다)
//
//그러면, 백만(1,000,000) 이하의 수로 시작했을 때 1까지 도달하는데 가장 긴 과정을 거치는 숫자는 얼마입니까?
//
//참고: 계산 과정 도중에는 숫자가 백만을 넘어가도 괜찮습니다.

#include <stdio.h>

int no14_hailstoneSequence(long num) {
    int count = 0 ;
    while( num != 1 ) {
        count ++;
        if( num%2 == 1) {  //홀수
            num = 3 * num + 1;
        } else {        //짝수
            //num /= 2;
            num >>= 1; // >>= 연산자 쓸때 더 빠름!
        }
    }
    
    return count;
}
int no14_main(){
    int store;
    int count;
    int max = 0;
    
    for(int i = 3 ;i < 1E6; i += 2) {
        count = no14_hailstoneSequence(i);
        if( max <= count ) {
            max = count;
            store = i;
        }
    }

    printf("%d\n", store);
    
    return 0;
}