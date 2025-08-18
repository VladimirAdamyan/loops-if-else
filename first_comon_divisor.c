#include<stdio.h>

int main(){
	int i = -0;
	int num1 = 0; 
	int num2 = 0;
	printf("enter numbers: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	for( i = 2; i <= num1; ++i ){
		if(num1 % i == 0 && num2 % i == 0){
break;
	

		}
		}  
                        printf("%d", i);

return 0;		
}
