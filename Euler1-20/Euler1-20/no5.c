/*
  Euler no5.c
 
 1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.
 
 그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?

  Created by Yeonju on 2013. 12. 5..
  Copyright (c) 2013 Yeonju. All rights reserved.
*/

#include <stdio.h>
#include <math.h>

const int no5_MAX = 21;
int no5_arr[no5_MAX] ;

int no5_isPrime(int a) {
    int i = 2;
    for( ; a%i ; i++);
    if( a == i ) return 1;
    else return 0;
}

int no5_getParam(int p) {
    int i = 1;
    for ( ; pow(p, i) < no5_MAX ; i ++ );
    return i - 1;
}

int no5_main() {
    int result = 1;
    int i = 2 ;
    //구한다
    for( ; i < no5_MAX ; i++ ) {
        if ( no5_isPrime(i) ) {
            no5_arr[i] = no5_getParam(i);
        }
    }
    
    //곱한다
    for ( i = 0 ;i < no5_MAX ; i ++ ) {
        result *= no5_arr[i]? pow(i, no5_arr[i]) : 1;
    }
    
    printf( "%d", result );
        
    return 0;
}
