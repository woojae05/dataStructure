#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	FILE* fp = fopen("file.txt", "w"); //w는 쓰기모드
	fprintf(fp, "%s %s %d", "I", "am", 20);
	fclose(fp);
	fp = fopen("file.txt", "r");
	char line[100];
	fgets(line, 100, fp);
	printf("%s", line);
	return 0;
}