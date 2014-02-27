//
//  no19.c
//  Euler
//
//  1900년은 윤년이 아니다 그러므로 365일임(1900년 1월 1일은 월요일)
//  월   화   수   목   금   토   일
//  1   2    3    4   5    6   0
//
//  Created by Yeonju on 2014. 2. 21..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//
#ifndef bool
#define bool int
#define false ((bool)0)
#define true  ((bool)1)
#endif

#include <stdio.h>
// 0은 평달, 1은 윤달
int no19_map[2][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}    };


int no19_main() {
    int count = 0;
    int day = 366; //1901년 1월 1일은 1900년 1월 1일(이날을 1일이라고 했을 때)로부터 366일째 되는날
    for(int year = 1901 ; year < 2001;  year++) {
        bool yoon = ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0 );  //윤달
        for(int month = 0 ; month < 12 ; month++ ) {
            if ( (day+=no19_map[yoon][month]) % 7 == 0 ) ++count ;
        }
    }
    printf("%d", count);
    return 0;
}
