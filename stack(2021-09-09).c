#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
int stack[SIZE]; // 선형자료구조
void push(int); // 스택에 데이터 한 개 삽입
void pop(); // 스택에서 데이터 한 개 빼기, 삭제
void display(); //스택의 내용 보여주기
int top = -1;
void menu() {
	printf("\n-----------------------------------\n");
	printf("1번에 스택에 삽입(push) 2번 스택에서 삭제 (pop)\n");
	printf("3번 용보기(display) 4번 프로그램 종료(exit)\n");
}

int main() {
	int val, n;
	printf("*******스택 구현 메뉴**********\n");
	while (1)
	{
		menu();
		printf("메뉴를 선택하세여 : "); scanf("%d", &n);
		switch (n)
		{
		case 1:// push
			printf("스택에 삽입할 숫자 :"); scanf("%d", &n);
			push(n);
			break;
		case 2://pop
			pop();
			break;
		case 3:
			display();//display
			break;
		case 4:
			return 0;
		default:
			printf("다시입력 하세요");

		}
	}
	return 0;
}

void push(int n) {
	if (top == SIZE - 1)//top==4
		printf("****스택이 가득참*****");
	else
	stack[++top] = n;
}

void pop() {  
	if (top == -1) {
		printf("스택이 비어있음");
	}
	else
	printf("%d가 사라짐\n", stack[top--]);
}

void display() {
	printf("---------------------\n");
	for (int i = 0; i <= top; i++) {
		printf("%d번:%d\n",i+1, stack[i]);
		printf("------------------\n");
	}
}