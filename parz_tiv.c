#include<stdio.h>

int main(){
	
	int num = 0;
	int i = 0;
	printf("enter the number: ");
	scanf("%d", &num);
	int num1 = num - 1;	
	while(num1){
	if(num % num1 == 0){
		i = i + 1;
                
		
	}                num1 = num1 - 1;

	}
	if(i > 1){
		printf("parz chi");
		
	}else printf("parza");

	return 0;

}
