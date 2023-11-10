//千位数字输出//
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x = 0;
	printf("%s", "请输入一个四位数：");
	scanf("%d", &x);
	printf("千位：%d\n", x % 10);
	printf("百位：%d\n", x % 100 / 10);
	printf("十位:%d\n", x % 1000 / 100);
	printf("个位:%d\n", x / 1000);
	return 0;

}