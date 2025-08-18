#include<stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("enter the digits: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", a * 100 + b * 10 + c);
	return 0;
}
