#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	printf("Digite o numero do dia da semana: \n");
	scanf("%d", &num);
	switch(num){
		case 1: printf("Domingo.\n");
			break;
		case 2: printf("Segunda-Feira.\n");
			break;
		case 3: printf("Terca-Feira.\n");
			break;
		case 4:printf("Quarta-Feira.\n");
			break;
		case 5:printf("Quinta-Feira.\n");
			break;
		case 6:printf("Sexta-Feira.\n");
			break;
		case 7:printf("Sabado.\n");
	}
}
