//
//  no9.c
//  Euler
//
//  Created by Yeonju on 2013. 12. 7..
//  Copyright (c) 2013년 Yeonju. All rights reserved.
//
//피타고라스 수 
// ( m^2 - n^2, 2mn, m^2 + n^2)
// a + b + c = 2m^2 + 2mn = 2m(m + n) = 1000;
// m ( m + n ) = 500;
// n = 500/ m - m
#include <stdio.h>
#include <math.h>

int abs(int a) { return a>0? a : -a; }

const int no9_MAX = 500;

int no9_param[50];
int no9_maxParam=0;
void no9_getParam(int a) {
    int j = 2;
    for( ; j < a ; j++) {
        if(a%j == 0) no9_param[no9_maxParam++] = j;
    }
}

int no9_main() {
    int a, b, c, m, n;
    int i = 0;
    no9_getParam(no9_MAX);
    for( i = 0 ; i < no9_maxParam ; i++ ) {
        
        m = no9_param[i];
        n = (no9_MAX/m - m);
        
        if( n < 0 ) break;
        
        a = abs(m*m - n*n);
        b = 2 * m * n;
        c = m*m + n*n;
    
        !(1000%(a+b+c)) ? printf("%d\n", a*b*c): printf("");
        
    }
    return 0;
}