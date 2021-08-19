#include<stdio.h>

int i = 7;

extern void func1(); //다른 파일에 있는 func1()함수를 가져온다.

int main(){
	int i = 5;
	func1();
	i++;
	printf("i=%d\n", i);
	return 0;
}