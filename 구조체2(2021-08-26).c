#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include<string.h>
typedef struct stu Stu;
struct stu{
	//�л� �̸�, ����, ����
	char name[10];//��� ����, �ʵ�
	int age;
	int score;
};
int main() {
	Stu s1 = { "kim",17,90 };
	Stu s2 = { "PARk",17,80 };
	printf("%s: %d %d\n", s1.name, s1.age, s1.score);
	printf("%s: %d %d\n", s2.name, s2.age, s2.score);
}