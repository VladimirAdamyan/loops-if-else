#include<stdio.h>

int main(){
	int j = 0;
	int i = 0;
	int num = 0;
	printf("enter the number: ");
	scanf("%d", &num);
	while(num){
		i = num % 10;
		num = num / 10;
		if(i > j){
			j = i;
		}
	}
	printf("%d", j);
	
	return 0;
}
