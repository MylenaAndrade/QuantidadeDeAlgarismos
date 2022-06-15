#include<stdio.h>
/*
Fazer uma função que determine a quantidade
de algarismos de um número inteiro N.
*/

//mostrando que existe uma função
int quantAlgarismo(int n);

//função MAIN
void main(){
	//declaração de variáveis 
	int numero, quantidade;
	
	//comandos de entrada e saída
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//chamando e guardando a função
	quantidade=quantAlgarismo(numero);
	
	//printando o resultado da função
	printf("A quantidade de algarismo e de: %d", quantidade);
}

int quantAlgarismo(int n){
//declaração de variáveis
	 int quant=0;
	 
//estrutura de repetição
	do
	{  
    	n = n/10;
		 quant++;
	}while (n > 0);

//retornando a quantidade de algarismos para a MAIN
		return quant;
}

