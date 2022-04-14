#include <stdio.h>

int add(int a, intb){
	return (a+b);
}

int main(){
	int a, b;
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);
	printf("add: %d\n" add(a,b));
	return 0;
}
