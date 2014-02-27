//
//  no20.c
//  Euler
//
//  addAllElement( factorial(100) );
//  Created by Yeonju on 2014. 2. 21..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

#ifndef bool
#define bool int
#define false ((bool)0)
#define true  ((bool)1)
#endif

const int no20_MAX_SIZE = 160;
int no20_ARR_SIZE = 1;
int no20_arr[no20_MAX_SIZE] = {1, 0,};

void no20_initNumberTo1() {
    no20_arr[0] = 1;
    for(int i = 1 ;i < no20_ARR_SIZE ; i ++) {
        no20_arr[i] = 0 ;
    }
}

void no20_multiply(int exp) { // to no20_arr
    int dec;
    int i = no20_ARR_SIZE -1;
    for(; i >= 0 ; i --){
        no20_arr[i] *= exp ;
    }
    for(i = 0 ; i < no20_ARR_SIZE ; i ++){
        if( 9 < no20_arr[i] ) {
            if( i == no20_ARR_SIZE - 1) no20_ARR_SIZE ++;
            dec = no20_arr[i] / 10;
            no20_arr[i+1] += dec;
            no20_arr[i] -= dec * 10;
        }
    }
}

int * no20_factorial(int exp) {
    while( exp > 1 ) no20_multiply(exp--);
    return no20_arr ;
}

int no20_addAllElement(int * arr){
    int result = 0;
    int i = no20_ARR_SIZE - 1;
    while(i >= 0) result += arr[i--];
    return result;
}

int no20_main() {
    printf("%d", no20_addAllElement(no20_factorial(100)) );
    return 0;
}

