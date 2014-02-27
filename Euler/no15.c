//
//  no15.c
//  Euler
//
//  아래와 같은 2 × 2 격자의 왼쪽 위 모서리에서 출발하여 오른쪽 아래 모서리까지 도달하는 길은 모두 6가지가 있습니다 (거슬러 가지는 않기로 합니다).
//  그러면 20 × 20 격자에는 모두 몇 개의 경로가 있습니까?
//
//  Created by Yeonju on 2014. 1. 9..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>

// when 20 * 20, how much branches
const int no15_width = 21;
const int no15_height = 21;
__INT64_TYPE__ no15_arr[no15_width][no15_height] = { -1, };

void no15_getBranch(int w, int h) {
	if(w >= no15_width) return;
	if(h >= no15_height) return;

	if ( w == 0 && h == 0 ) {
		no15_arr[w][h] = 1;
		return;
	}
    
    __INT64_TYPE__ branch = 0;
	// get upper
	if(h > 0) branch += no15_arr[w][h-1];
    
	// get lefter
	if(w > 0) branch += no15_arr[w-1][h];

	no15_arr[w][h] = branch;
}

int no15_main() {
	for(int i = 0; i < no15_width + no15_height ; i ++) {
		for (int j = 0 ; j <= i ; j ++) {
			no15_getBranch(j, i-j);
		}
	}
    
	printf("\n%lld\n", no15_arr[no15_width-1][no15_height-1]);
    
	return 0;
}

// Combination
__INT64_TYPE__ combi(int t,int c)
{
    __INT64_TYPE__ r = 1;
    if (c > t)
        return 0;
    
    for (unsigned int d = 1; d <= c; ++d)
    {
        r *= t--;
        r /= d;
    }
    return r;
}

int no15_2_main() {
    printf("%lld", combi(40, 20));
    return 0;
}