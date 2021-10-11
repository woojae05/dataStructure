#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


struct Person
{
	char name[20];
	double score;
	struct Person* frnd;
};

	void insertionSort(int n, struct Person *person) {
		
		int tmp;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (person[j].score < person[j + 1].score) {
					tmp = person[j].frnd;
					person[j].frnd = person[j + 1].frnd;
					person[j + 1].frnd = tmp;
				}
			}
		}

	}


int main() {
	struct Person person[100];
	
	int n; 
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d", &person[i].name, &person[i].score);
	}
	//insertionSort(n,&person[100]);
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (person[j].score < person[j + 1].score) {
				tmp = person[j].frnd;
				person[j].frnd = person[j + 1].frnd;
				person[j + 1].frnd = tmp;
			}
		}
	}


		printf("===================\n");
		
		for (int i = 0; i < n; i++) {
			printf("%s %d\n", person[i].name, person[i].score);
		}
}
