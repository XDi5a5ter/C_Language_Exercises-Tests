#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	float salarioliq, reajuste, salariofin;
    printf("************************************************ \n");
    printf("*Empresa:PlayBox \n*Nome: Ramon da S. Ribeiro \n*RA:21142313-5 \n");
    printf("************************************************ \n");
	printf("*Informe o Seu Salario do Ultimo Holerite:R$");
	scanf("%f", &salarioliq);
	
	(reajuste = salarioliq / 100 * 7.5);
	(salariofin = salarioliq + reajuste);
	printf("************************************************ \n");
	printf("*Salario Informado:R$ %.2f\n", salarioliq);
	
	if(salariofin<=1750){
		(salariofin= salariofin + 150);
		printf("*Salario a Receber:R$ %.2f\n", salariofin);
		printf("************************************************ \n");
  	    return 0;
  	}
    printf("*Salario a Receber:R$ %.2f\n", salariofin);
    printf("************************************************");
	}
