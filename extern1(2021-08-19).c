#include<stdio.h>

int i = 7;

extern void func1(); //�ٸ� ���Ͽ� �ִ� func1()�Լ��� �����´�.

int main(){
	int i = 5;
	func1();
	i++;
	printf("i=%d\n", i);
	return 0;
}