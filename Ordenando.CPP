#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{float num1, num2, num3;
//Limpa a tela
system("cls");
//Mostra mensagem solicitando o primeiro n£mero
printf("\nDigite o primeiro n£mero: ");
//Recebe o valor do primeiro n£mero
scanf("%f",&num1);
//Mostra mensagem solicitando o segundo n£mero
printf("\nDigite o segundo n£mero: ");
//Recebe o valor do segundo n£mero
scanf("%f",&num2);
//Mostra mensagem solicitando o terceiro n£mero
printf("\nDigite o terceiro n£mero: ");
//Recebe o valor do terceiro n£mero
scanf("%f",&num3);
//Determina e mostra a ordem crescente dos n£meros digitados
if (num1 < num2 && num1 < num3)
    {
	 if (num2 < num3)
		printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f",num1,num2,num3);
	 else 
		printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f ",num1,num3,num2);
    }
else if (num2 < num1 && num2 < num3)
    {
	 if (num1 < num3)
	    printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f ",num2,num1,num3);
	 else 
	   printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f ",num2,num3,num1);
    }
     else //if (num3 < num1 && num3 < num2)
        {
	     if (num1 < num2)
		   printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f ",num3,num1,num2);
	     else
		 printf("\nA ordem crescente dos n£meros ‚: %.2f\t%.2f\t%.2f ",num3,num2,num1 );
        }
//P ra o programa a espera de um ENTER
getch();
}
