//Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e 
//positivo e A, B, C são valores reais. Escreva os números A, B, e C obedecendo a
//tabela a seguir. Supondo que o valor digitado para I seja sempre um valor válido, ou
//seja, 1, 2 ou 3.

#include<stdio.h>

int main(){
	int i, a, b, c;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	printf("Digite um valor para I(1, 2 ou 3):");
	scanf("%i", &i);
	
	if (a!= b && b != c && a != c)
	{
		switch(i){
			case 1:
				if(a > b && b > c)
					printf("%d, %d, %d", c, b, a);
				else if(a > c && c > b)
					printf("%d, %d, %d", b, c, a);
				else if(b > a && a > c)
					printf("%d, %d, %d", c, a, b);
				else if(b > c && c > a)
					printf("%d, %d, %d", a, c, b);
				else if(c > a && a > b)
					printf("%d, %d, %d", b, a, c);
				else
					printf("%d, %d, %d", a, b, c);
		break;
			case 2: 
				if(a > b && b > c)
					printf("%d, %d, %d", a, b, c);
				else if(a > c && c > b)
					printf("%d, %d, %d", a, c, b);
				else if(b > a && a > c)
					printf("%d, %d, %d", b, a, c);
				else if(b > c && c > a)
					printf("%d, %d, %d", b, c, a);
				else if(c > a && a > b)
					printf("%d, %d, %d", c, a, b);
				else
					printf("%d, %d, %d", c, b, a);
		break;
			case 3:
				if(a > b && a > c)
					printf("%d, %d, %d", b, a, c);
				else if(b > a && b > c)
					printf("%d, %d, %d", a, b, c);
				else
					printf("%d, %d, %d", a, c, b);
				
		break;
		
		default:
			printf("Opcao invalida");
		}
	}
}
