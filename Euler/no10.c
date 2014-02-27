//
//  no10.c
//  Euler
//
//  Created by Yeonju on 2013. 12. 8..
//  Copyright (c) 2013년 Yeonju. All rights reserved.
//
//10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.
//
//이백만(2,000,000) 이하 소수의 합은 얼마입니까?
//에레스토테네스의 체
#include <stdio.h>
#include <math.h>
#include <time.h>

const int no10_MAX = 2E6;

int no10_getPrime(int a, int no10_prime[], int no10_maxPrime) {
    for( int i = 0 ;i < no10_maxPrime ; i++) {
        if ( a % no10_prime[i] == 0 ) return 0;
        if ( no10_prime[i] > sqrt( a ) ) break;
    }
    no10_prime[no10_maxPrime++] = a;
    return 1;
}

int no10_main() {
    
    int no10_prime[150000] = {2,0,};
    int no10_maxPrime = 1;
    
    clock_t start_time = clock();

    int i = 3 ;
    long result = 2;

    for( ; i < no10_MAX ; i +=2) {

        if ( no10_getPrime (i, no10_prime, no10_maxPrime)) {
            result += i;
        }
    }
    
    printf("%ld\n", (clock() - start_time)* 1000/CLOCKS_PER_SEC); //ms기준
    printf("%ld\n", result);
    
    return 0;
}