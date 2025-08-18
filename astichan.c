#include<stdio.h>

int main(){
	
	int res = 1;
	int x = 0;
	int y = 0;
	printf("enter your numbers: ");
	scanf("%d", &x);
	scanf("%d", &y);
	while(y--){
	res = res * x;
	}
	printf("%d", res);

	return 0;

}
