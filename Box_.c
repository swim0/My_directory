#define _CRT_SECURE_NO_WARNINGS 
#define INCHES_PER_POUND (166)
/*Name: pun.c */

/*
*여려줄일땐
*이렇게사용해라.
*/


#include <stdio.h>

int main(void) {

	int height;
	int length;
	int width;

	printf("세 변의 길이 입력 : ");
	scanf("%d %d %d", &height, &length, &width);

	int volume = height * length * width;
	int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("weight : %d", weight);



	return 0;
}