#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����(���̺귯��)
// ���Ḯ��Ʈ, ��ũ�帮��Ʈ, linkedlist
typedef struct NODE ND;
struct NODE		//���� ����Ʈ�� ��� ����ü
{					
	ND* next;	// ���� ����� �ּҸ� ������ ������
	int data;	// �����͸� ������ ���
};

int main(){
	ND* head = (ND*)malloc(sizeof(ND));
	ND* node1 = (ND*)malloc(sizeof(ND));
	head->next = node1;
	node1->data = 10;
}