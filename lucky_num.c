#include<stdio.h>

int main(){
	int mnacord = 0;
	int num = 0;
	printf("input number: ");
	scanf("%d", &num);
	while(num > 1){
		mnacord = num % 10;
		if(mnacord != 4 && mnacord != 7){
			printf("unlycky number\n");
			return 0;
		}num = num / 10;
	}
	printf("the number is lucky\n");
	
	return 0;
}
