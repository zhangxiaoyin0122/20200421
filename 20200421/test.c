#include <stdio.h>
#include <stdlib.h>
最小公倍数为 两数之积除以最大公约数
求两个数的最大公约数
辗转相除法
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
相减法
int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}
形参是实参的拷贝,形参的改变不影响实参
void swap(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	/*int ret = gcd(12,18);
	printf("%d\n", ret);	*/
	//int ret = gcd(12, 18);
	int a = 1;
	int b = 2;
	swap(&a, &b);
	//printf("%d", ret);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int num[10];
	int i = 0;
	int max = 0;
	printf("请输入十个整数：");
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		
	}
	max = num[0];
	for (i = 1; i < 10; i++) {
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	printf("十个整数中的最大值为：%d\n", max);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
		printf("输入两个数字求最大公约数:");
		scanf("%d%d", &a, &b);
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		printf("最大公约数是:%d\n", a);
	system("pause");
	return 0;
}

