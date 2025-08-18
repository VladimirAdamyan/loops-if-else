#include<stdio.h>

int main(){

	int num = 0;
	printf("insert number: ");
	scanf("%d", &num);
	int i = num % 10;
	if(i < 5){
		num = num - i;
		printf("%d", num);
	}else printf("%d", num - i + 10);

	return 0;
}
