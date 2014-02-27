//
//  no16.c
//  Euler
//
// 2^15 = 32768의 각 자리 수를 더하면 3+2+7+6+8 = 26입니다
// 2^1000의 각 자리 수를 더하면 얼마입니까?
//
//  Created by Yeonju on 2014. 1. 13..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//
// 2 		2
// 4 		4
// 8 		8
// 16 		7
// 32 		5
// 64 		10
// 128 	11
// 256		13
// 512		8
// 1024 	7
// 2048	14
// 4096 	20


#include <stdio.h>
#ifndef bool
#define bool int
#define false ((bool)0)
#define true  ((bool)1)
#endif

/**
 * Class description
 *
 * @author <A HREF="mailto:lala7573@gmail.com">Yeonju, Hwang</A>
 * @version 1.0
 * @see class name#method
 * @since 2014. 2. 7.
 */

const int no16_MAX_SIZE = 340;
int no16_ARR_SIZE = 1;
int no16_arr[no16_MAX_SIZE] = {1, 0,};

void no16_initNumberTo1() {
    no16_arr[0] = 1;
    for(int i = 1 ;i < no16_ARR_SIZE ; i ++) {
        no16_arr[i] = 0 ;
    }
}
bool no16_isBiggerThan9(int num) {
    if(num > 9) return true; else return false;
}

void no16_powOf2(int exp) {
    while( exp > 0 ){
        for(int i = no16_ARR_SIZE - 1 ; i >= 0 ; i --){
            no16_arr[i] <<= 1;
        }
        for(int i = no16_ARR_SIZE - 1 ; i >= 0 ; i --){
            if( no16_isBiggerThan9(no16_arr[i]) ) {
                if( i == no16_ARR_SIZE - 1) no16_ARR_SIZE ++;
                no16_arr[i+1] ++;
                no16_arr[i] -= 10;
            }
        }
        exp--;
    }
}
int no16_addAllElement(){
    int result = 0;
    for(int i = no16_ARR_SIZE - 1 ; i >= 0 ; i --){
        result += no16_arr[i];
    }
    return result;
}

int no16_main() {
    //initNumberTo1();
    no16_powOf2(1000);
    printf("%d", no16_addAllElement());
    return 0;
}

