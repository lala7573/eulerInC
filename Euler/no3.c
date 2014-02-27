//
//  no3.c
//  Euler
//
//  Created by Yeonju on 2014. 2. 27..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

long no3_getParam(long number){
    long i =  2;
    for( ;i <= number ; i++){
        if( number%i==0 ) break;
    }
    if(i == number) return i;
    return no3_getParam(number/i);
}

void no3_main() {
    printf("%ld", no3_getParam(600851475143L));
}
