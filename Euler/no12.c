//
//  no12.c
//  Euler
//
//  Created by Yeonju on 2013. 12. 8..
//  Copyright (c) 2013년 Yeonju. All rights reserved.
//
/*
 1부터 n까지의 자연수를 차례로 더하여 구해진 값을 삼각수라고 합니다.
 예를 들어 7번째 삼각수는 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28이 됩니다.
 이런 식으로 삼각수를 구해 나가면 다음과 같습니다.
 
 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 이 삼각수들의 약수를 구해봅시다.
 
 1: 1
 3: 1, 3
 6: 1, 2, 3, 6
 10: 1, 2, 5, 10
 15: 1, 3, 5, 15
 21: 1, 3, 7, 21
 28: 1, 2, 4, 7, 14, 28
 36 : 1, 2, 3, 4, 6, 9, 12, 18, 36
 위에서 보듯이, 5개 이상의 약수를 갖는 첫번째 삼각수는 28입니다.
 
 그러면 500개 이상의 약수를 갖는 가장 작은 삼각수는 얼마입니까?
 
약수의 갯수    15 = 3 * 5   => (지수+1)의 곱   그러므로 4
 */

#include <stdio.h>

int no12_param[100000]; // 새 n의 factorize
int no12_temp[100000];
int no12_maxParam = 2;
int no12_maxTemp = 2;
void no12_getParam(int n) {
    int i = 2;
    while(!(n&1)){
        n>>=1;
        no12_param[i]++;
    }
    
    for (; n != 1 && n != 0 ; n /= i){
        i = 3;
        for ( ; i < n && n%i != 0; i += 2);
        no12_param[i]++;
    }
    no12_maxParam = i;
}
int no12_getCount() {
    int count =1 ;
    int max = no12_maxParam > no12_maxTemp? no12_maxParam : no12_maxTemp;
    for( int i = 2 ; i <= max ; i++) {
        int temp = no12_param[i]+no12_temp[i];
        if(temp) {
            count *= (temp + 1);
            no12_temp[i] = no12_param[i] ;
            no12_param[i] = 0; //init for next compute
            no12_maxTemp = no12_maxParam;
        }
    }
    return count;
}

int no12_main() {
    int i = 0;
    
    while (1) {
        i++;
        no12_getParam(i&1?i : i/2);
        if( no12_getCount() >= 500) break;
    }

    printf("%d\n", (i-1) * i / 2);
    return 0;
}