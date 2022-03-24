#include <stdlib.h>
#include<stdio.h>

int main(){
 

	float num1, num2;	 
	int op;
	printf("Seja bem vindo a nossa calculadora \n \n");
    printf("Digite um numero \n");
	scanf("%f", &num1);
	printf("Digite outro Numero\n");	
	scanf("%f", &num2);
	printf("Digite qual operacao deseja: (1)soma, (2)subtracao, (3)divisao e (4)multiplicacao \n");
	scanf("%i", &op);		
	switch(op){
		case 1:
		printf("%.2f\n\n", num1 + num2);
		break;
		case 2:
		printf("%.2f\n\n", num1 - num2);
		break;
		case 3:
		printf("%.2f\n\n", num1 / num2);
		break;
		case 4:
		printf("%.2f\n\n", num1 * num2);
		break;	
	}
	
}
	

