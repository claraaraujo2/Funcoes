#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void main() {
	
	int oprmenu, oprmenu2, opropt, operacao, confopr;
	float numero1, numero2, total;
	
	
	printf (">>Aperte qualquer tecla para comecar<<\n\n");
	getch();
	
	/* operation menu start */
	oprmenu = 1;
	operacao = 0;
	while (oprmenu == 1 ){
	
		printf(
			"\nEscolha uma operacao:\n\n"
			"  [Digite 1] Adicao			\n"
			"  [Digite 2] Subtracao			\n"
			"  [Digite 3] Divisao			\n"
			"  [Digite 4] Multiplicacao		\n"
			"  [Digite 0] Encerrar programa	\n\n"
			);
		scanf("%d",&operacao);
		
		switch (operacao){
			case 0: oprmenu = 0; break;
			
			case 1:  
			
				printf("\n\nDigite um numero:\n");
				scanf("\n%f",&numero1);
			
				printf("\n  mais:\n\n");
				scanf("\n%f",&numero2);
	
				soma(numero1, numero2);
			
				printf (">>Aperte qualquer tecla para continuar<<\n\n");
				getch();
				
			break;
			
			case 2:
				
				printf("\n\nDigite um numero:\n\n");
				scanf("\n%f",&numero1);
			
				printf("\n  menos:\n\n");
				scanf("\n%f",&numero2);
				
				sub(numero1, numero2);
			
				printf (">>Aperte qualquer tecla para continuar<<\n\n");
				getch();
						
			
			break;
			
			case 3:
				
				divi(numero1,numero2);
				printf (">>Aperte qualquer tecla para continuar<<\n\n");
				getch();
				
			break;
			
			case 4:
				
				printf("\n\nDigite um numero:\n\n");
				scanf("\n%f",&numero1);
				
				printf("\n  multiplicado por:\n\n");
				scanf("\n%f",&numero2);
				
				mul(numero1,numero2);
				
				printf (">>Aperte qualquer tecla para continuar<<\n\n");
				getch();
						
			
			break;
			
			default:
				printf("\n Opcao invalida. Por favor digite novamente.\n\n");
			break;
		};


	};
	/* operation menu end */
	}
