//
//  no6.c
//  Euler
//
//  Created by Yeonju on 2014. 2. 27..
//  Copyright (c) 2014년 Yeonju. All rights reserved.
//

#include <stdio.h>
#include <math.h>

const int no6_MAX = 100;
void no6_main () {
    printf("%f",pow((no6_MAX * (no6_MAX + 1) / 2), 2)-(no6_MAX * (no6_MAX + 1) * (2 * no6_MAX + 1) / 6));
}
