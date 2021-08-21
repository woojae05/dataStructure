#include<stdio.h>

int fac(int c) { // 재귀함수를 사용해 패토리얼 구현하기
	return ((c == 0) ? 1 : c * fac(c - 1));
}

int fac1(int c) {
	if (c == 0) {
		c = 1;
	}
	else
	{
		c = c * fac1(c - 1);
	}
	return c;
}

void main() {
	for (int i = 1; i <= 10; i++) {
	printf("%d!= %d\n",i, fac1(i)); // 120
	}
}