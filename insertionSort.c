#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void insertionSort(int arr[], int n) {
	// 삽입정렬, arr는 배열의 이름
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--) 
			arr[j + 1] = arr[j];
		arr[j + 1] = tmp;
	}
}

int main() {
	int list[5] = { 3,4,1,8,4 };
	insertionSort(list, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d", list[i]);
	}
}