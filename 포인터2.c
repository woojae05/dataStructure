#include<stdio.h>

int main() {
	char string[] = "hello";
	char* pstr = string;
	while (*pstr)
	{
		putchar(*pstr++);
	}
	return 0;
}