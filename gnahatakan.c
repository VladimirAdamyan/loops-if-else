#include<stdio.h>

int main(){
	int res = 0;
	printf("input your result: ");
	scanf("%d", &res);
	if (res < 60) {
		printf ("E class \n");
	}else if (res >= 60 && res <= 69){
		printf("D class \n");
	}else if (res >= 70 && res <= 79){
		printf("C class\n");
	}else if (res >= 80 && res <= 89){
		printf("B class \n");
	}else printf ("A class \n");

	return 0;
}
