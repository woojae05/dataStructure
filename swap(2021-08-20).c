#include<stdio.h>
void swap();
void swap2();
int main() {
	int a = 5, b = 7;
	swap(a, b);
	printf("a=%d,b=%d\n", a, b); //a=5, a=7
	swap2(&a, &b);
	printf("a=%d,b=%d", a, b);  //a=7, a=5
}


void swap(int a, int b) {  // call by value
	int t = a;
	a = b;
	b = t;
}

void swap2(int* a, int* b) { // call by reference
	int t = *a;
	*a = *b;
	*b = t;
}