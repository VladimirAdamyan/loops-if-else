#include<stdio.h>

int main(){

	int num = 0;
	printf("insert number: ");
	scanf("%d", &num);
	int num1 = num / 2;
	printf("%d\n", num);
	while(num1){
		if(num % num1 == 0){
			printf("%d\n", num1 );
			}
	--num1;
	}
	
	return 0;
}
