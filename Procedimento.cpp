#include<stdio.h>
#include<stdlib.h>
void somaDoisNumeros(){
	int x,y,resultado;
	printf("Digite o primeiro numero:\n");
	scanf("%d", &x);
	printf("Digite o segundo numero:\n");
	scanf("%d", &y);
	resultado = x + y;
	printf("Resultado:%d.\n", resultado);
}
int main(){
	somaDoisNumeros();
	somaDoisNumeros();
	somaDoisNumeros();
	somaDoisNumeros();
}


