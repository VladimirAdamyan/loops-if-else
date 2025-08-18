#include<stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	int res = 0;	
	printf("enter numbrs ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num1 % 2 == 0){
	while (num1 <= num2){
		res = res + num1;
		num1 = num1 +2;
	}
	}
	else { num1 = num1 + 1;
	while (num1 <= num2){
		 
	
		res = res + num1;
		num1 = num1 +2;
	}
	}
	printf("%d", res);

return 0;
}

