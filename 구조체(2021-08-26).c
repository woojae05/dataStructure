#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct STU stu;
struct STU
{
	char name[10];
	int age;
};

int main() {
	stu* student;
	student = (stu*)malloc(sizeof(stu)); //void ����ȯ
	//student->name = "KIM"; Ʋ�� ���
	strcpy(student->name, "KIM");
	student->age = 17;
	//(*student).age=17; �� ������� ���� ���
	printf("%s %d\n",student->name,student->age );
	free(student);//malloc�� ����� free�� �޸𸮿��� ����

	stu* inFo;
	inFo = (stu*)malloc(sizeof(stu));//�����ϱ�
	strcpy(inFo->name, "woojae");
	inFo->age = 17;
	printf("%s %d", inFo->name, inFo->age);
}