#include<stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("enter numbers: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	if(num2 > num1 && num2 > num3){
		if(num1 > num3){
			printf("%d\n %d\n %d\n", num2, num1, num3);
		}else printf("%d\n %d\n %d\n", num2, num3, num1);
	}
	else if(num1 > num2 && num1 > num3){
		if(num2 > num3){
			printf("%d\n%d\n%d", num1, num2, num3);
		}else printf("%d\n%d\n%d", num1, num3, num2);

	}else {
		if(num2 > num1){
			printf("%d\n%d\n%d", num3, num2, num1);
		}else printf("%d\n%d\n%d", num3, num1, num2);
	}

	
	return 0;

}
