#include<stdio.h>

int main(){
	
	int res = 0;
	int num = 0;
	printf("enter the number: ");
	scanf("%d", &num);
	for(int i = 1 ; i < 10 ; i++){
		
		printf("%d * %d = %d\n" , num , i, num * i );
	}
	return 0;
}
