#include <stdio.h>

int sub(int a, int b){
	return (a-b);
}

int main(){
	int a, b;
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);
	printf("sub: %d\n" sub(a,b));
	return 0;
}
