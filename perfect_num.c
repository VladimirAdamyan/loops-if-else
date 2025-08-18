#include<stdio.h>

int main(){
	int i = 0;
	int num = 0;
	printf("enter the number: ");
	scanf("%d", &num);
	int num1 = num /2;
	int mnacord = 0;
	while(num1){
		mnacord = num % num1;
		if(mnacord == 0){
			i = i + num1;
		}
		--num1;
	}
	if(i == num)
	{
		printf(" is perfect number");
	}else printf(" isn't perfect number");
	
	return 0;
}
