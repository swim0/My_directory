#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main(void) {
    int d, total;
    int i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int first_num, second_num;

    printf("첫번째 (한자리수) 숫자를 입력해주세요: ");
    scanf("%1d", &d);
    printf("첫번째 다섯자리 숫자를 입력해주세요: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("두번째 다섯자리 숫자를 입력해주세요: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_num = d + i2 + i4 + j1 + j3 + j5;
    second_num = i1 + i3 + i5 + j2 + j4;
    total = first_num * 3 + second_num;

    printf("%d ", 9 - ((total - 1) % 10));;

    return 0;



}