//ǧλ�������//
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x = 0;
	printf("%s", "������һ����λ����");
	scanf("%d", &x);
	printf("ǧλ��%d\n", x % 10);
	printf("��λ��%d\n", x % 100 / 10);
	printf("ʮλ:%d\n", x % 1000 / 100);
	printf("��λ:%d\n", x / 1000);
	return 0;

}