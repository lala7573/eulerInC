//
//  no12_2.c
//  Euler
//
//  Created by Yeonju on 2013. 12. 8..
//  Copyright (c) 2013년 Yeonju. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int no12_2_main() {
    
    int n = 0,i = 1;

    while(1) {
        n += (i++);
        
        int factor= 0, factorCnt = 0;
        while(factor ++ < sqrt(n)) {
            if(!( n % factor )) factorCnt+=2;
        }
        
        if(factorCnt > 500) {
            printf("%d\n", n);
            break;
        }
    }
    return 0;
}