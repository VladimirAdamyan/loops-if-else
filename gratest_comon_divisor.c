#include<stdio.h>

int main(){
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	printf("enter numbers: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num1 > num2){
		i = num2 / 2;
	}else i = num1 / 2;
	while (i){
		if(num1 % i == 0 && num2 % i == 0){
			break;
		}
		--i;
	}
	printf("%d", i);
	
	return 0;
}
