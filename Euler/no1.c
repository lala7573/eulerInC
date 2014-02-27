//
//  no1.c
//  Euler
//
//  Created by Yeonju on 2014. 2. 27..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

int no1_getSum(int num) {
    int i = 999/num;
    i*= num;
    int temp = 0;
    if((i/num)%2 == 1) {
        temp =((i/num)/2 +1)*num;
    }
    return (num + i) * ((i/num)/2) + temp;
}

void no1_main() {
    printf("%d", no1_getSum(3) + no1_getSum(5) - no1_getSum(15));
}

