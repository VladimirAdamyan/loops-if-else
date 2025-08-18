#include<stdio.h>

int main(){
	char sym = 0;
	printf("input symbol: ");
	scanf("%c", &sym);
	if(sym <= 57 && sym >= 48){
		printf("true");
	}	
	else 
		printf("false");

	return 0;
	}
