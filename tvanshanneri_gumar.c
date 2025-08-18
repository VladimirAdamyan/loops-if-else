#include<stdio.h>

int main(){
	int num = 0;
	int mnacord = 0;
	int res = 0;
	int qanak = 0;
	printf("input number ");
	scanf("%d", &num);
	while(num > 1){
		
		mnacord = num % 10;
		num = num / 10;
		res = res + mnacord;
	}

	printf("%d", res);

	return 0;
}
