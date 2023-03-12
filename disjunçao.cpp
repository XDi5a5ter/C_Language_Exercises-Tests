#include<stdio.h>
#include<stdlib.h>
int main(){
	float num;
	printf( "Digite um numero: \n" );
	scanf( "%f", &num );
	if( num > 10 || num == 0 ){
		printf( "Uma das condicoes esta ok!" );
	}
}
