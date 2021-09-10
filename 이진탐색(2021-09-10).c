#include<stdio.h>
#include<stdlib.h>

// 이분 탐색, 이진 탐색 : 정렬된 배열속 데이터 찾기

int S[100] = { 5,7,23,44,45,57,78,88,98,110,120,121 };
int n, k;
int binarysearch(int s, int e) { //start end
	while (s <= e)
	{
		int m = (s + e) / 2; //m은 middle
		if (S[m] == k)
			return m;
		if (S[m > k])
			e = m - 1;
		else
			s = m + 1;
	}
	return -1;
}

int main() {
	printf("찾을 숫자 입력:");
	scanf_s("%d", &k);
	printf("%d번쨰에서 발견\n", binarysearch(0, 10));
}