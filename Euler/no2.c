//
//  no2.c
//  Euler
//
//  Created by Yeonju on 2014. 2. 27..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

const int no2_MAX = 4E6;
void no2_main(){
    int a = 1;
    int b = 2;
    int sum = 0;
    
    while( a < no2_MAX ) {
        if(!(a&1)) sum += a;
        if(!(b&1)) sum += b;
        
        a+=b;
        b+=a;
    }
    
    printf("%d",sum);
}
