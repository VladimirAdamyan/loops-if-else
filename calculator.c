#include <stdio.h>
 int main()
 {
	int num2 = 0;
 	int num1 = 0;
 	char sign = 0;
 	int status = 0;
 	printf("insert number:     (q to exit)\n");
	
	
	status = scanf("%d", &num1);
 while(status = 1){
	
	 scanf("%c", &sign);
	status = scanf("%d", &num2);
 	 switch (sign){
 	
	 case '*':
		 num1 = num1 * num2;
		 printf("%d", num1);
		break;
 	case '/':
		num1 = num1 / num2;
		 printf("%d", num1);
		 break;
	case '+': 
		 num1 = num1 + num2;
		printf("%d", num1);
		break;
	case '-':
		num1 = num1 - num2;
		printf("%d", num1);
		break;		
 }
	
 
 }
	return 0;
 }

