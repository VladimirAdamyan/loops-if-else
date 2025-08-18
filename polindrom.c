#include<stdio.h>

int main(){
        int num = 0;	
	int mnacord = 0;
	int res = 0;
	printf("input number ");
	scanf("%d", &num);
	int num1 = num;
	while(num){
		mnacord = num % 10;
		res = res * 10 + mnacord;
		num = num / 10;
	
}
	if(res == num1){
	printf("the number is polydrom ");
	}else printf(" the number isn't polydrom ");

	return 0;
}
