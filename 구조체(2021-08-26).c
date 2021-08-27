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
	student = (stu*)malloc(sizeof(stu)); //void 형변환
	//student->name = "KIM"; 틀림 방법
	strcpy(student->name, "KIM");
	student->age = 17;
	//(*student).age=17; 잘 사용하지 않은 방법
	printf("%s %d\n",student->name,student->age );
	free(student);//malloc로 만들고 free로 메모리에서 해제

	stu* inFo;
	inFo = (stu*)malloc(sizeof(stu));//이해하기
	strcpy(inFo->name, "woojae");
	inFo->age = 17;
	printf("%s %d", inFo->name, inFo->age);
}