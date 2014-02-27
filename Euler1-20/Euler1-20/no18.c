//
//  no18.c
//  Euler
//
//  Created by Yeonju on 2014. 2. 20..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

int no18_arr[16][16];
const int no18_mrr[16][16] ={
    {0,},
    {75,0,},
    {95,64,0,},
    {17,47,82,0,},
    {18,35,87,10,0,},
    {20,4,82,47,65,0,},
    {19,1,23,75,3,34,0,},
    {88,2,77,73,7,63,67,0,},
    {99,65,4,28,6,16,70,92,0,},
    {41,41,26,56,83,40,80,70,33,0,},
    {41,48,72,33,47,32,37,16,94,29,0,},
    {53,71,44,65,25,43,91,52,97,51,14,0,},
    {70,11,33,28,77,73,17,78,39,68,17,57,0,},
    {91,71,52,38,17,14,91,43,58,50,27,29,48,0,},
    {63,66,4,68,89,53,67,30,73,16,69,87,40,31,0,},
    {4,62,98,27,23, 9,70,98,73,93,38,53,60,4,23,0}  };

void no18_main() {
    int result = 0;
    int i = 0;
    for( ;i < 16 ;i ++) {
        for (int j = 0 ; j <= i ; j++) {
                no18_arr[i][j] = no18_arr[i-1][j] > no18_arr[i-1][j-1] ? no18_arr[i-1][j] : no18_arr[i-1][j-1] ;
                no18_arr[i][j] += no18_mrr[i][j];
                result = result > no18_arr[i][j] ? result : no18_arr[i][j];
        }
    }
    for(int j = 0 ; j < i ; j++) {
        result = result > no18_arr[i-1][j] ? result : no18_arr[i-1][j];
    }
    
    printf("%d", result);
}
