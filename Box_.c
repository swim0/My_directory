#define _CRT_SECURE_NO_WARNINGS 
#define INCHES_PER_POUND (166)
/*Name: pun.c */

/*
*�������϶�
*�̷��Ի���ض�.
*/


#include <stdio.h>

int main(void) {

	int height;
	int length;
	int width;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &height, &length, &width);

	int volume = height * length * width;
	int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("weight : %d", weight);



	return 0;
}