//
//  no17.c
//  Euler
//  1부터 5까지의 숫자를 영어로 쓰면 one, two, three, four, five 이고,
//각 단어의 길이를 더하면 3 + 3 + 5 + 4 + 4 = 19 이므로 사용된 글자는 모두 19개입니다.
//
//1부터 1,000까지 영어로 썼을 때는 모두 몇 개의 글자를 사용해야 할까요?
//
//참고: 빈 칸이나 하이픈('-')은 셈에서 제외하며, 단어 사이의 and 는 셈에 넣습니다.
//예를 들어 342를 영어로 쓰면 three hundred and forty-two 가 되어서 23 글자,
//115 = one hundred and fifteen 의 경우에는 20 글자가 됩니다.
//
/*
        one two three four five six seven eight nine ten
        eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
 twenty
 thirty
 forty
 fifty
 sixty
 seventy
 eighty
 ninety
 hundred
 
 
 */

#include <stdio.h>

const int no17_num[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
    6, 6, 8, 8, 7, 7, 9, 8, 8}; //0~20
const int no17_dec[20] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6,
    10, 10, 12, 11, 11, 10, 12, 12, 11, 11} ;// 0,10,20...90, 100, 200, 300 ... 900, 1000 을 숫자로
int getNumberCount(int i) {
    int result = 0;
    int hund = i / 100;
    if(hund > 0) {
        result += no17_dec[hund+9];
        if(i%100 !=  0) result += 3;
    }
    
    if(i%100 < 20) {
        result += no17_num[i%100];
    } else {
        result += (no17_dec[i/10 - hund*10] + no17_num[i%10]);
    }
    
    return result;
}

void no17_main() {
    int result = 0 ;
    for(int i = 1; i <= 1000 ; i++) {
        result += getNumberCount(i);
    }
    printf("%d", result);
}